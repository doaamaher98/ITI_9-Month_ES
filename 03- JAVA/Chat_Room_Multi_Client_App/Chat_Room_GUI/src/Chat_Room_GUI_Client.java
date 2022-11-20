
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.FlowPane;


public class Chat_Room_GUI_Client extends Application {
    // References
    Socket my_Socket;
    DataInputStream data_in;
    PrintStream print_stream;
    
    // GUI
    TextArea ta;
    TextField tf;
    Label l;
    Button b;
    Thread th;
    
    // INIT METHOD : CONSTRUCTION
    @Override
    public void init()  {
        try {
            // Creating a socket with same IP & Port to connect to the server
            my_Socket = new Socket("127.0.0.1", 5010);
            ///////////////////////////////////////////////////
            // Getting Streams (Datainput & Output) from client
            data_in = new DataInputStream(my_Socket.getInputStream());
            print_stream = new PrintStream(my_Socket.getOutputStream());
        } 
        catch (IOException ex) {}
    
           // Creating the thread in the run method
            new Thread(new Runnable() {
            @Override
            public void run()
            {
                while (true)             // To ensure I'm always listening
                {
                    try {
                        String replyMsg;
                        
                        replyMsg = data_in.readLine();  // Reading msg from server
                        // Appending the text area
                        ta.appendText("\n" + replyMsg);
                    } catch (IOException ex) {
                        Logger.getLogger(Chat_Room_GUI_Client.class.getName()).log(Level.SEVERE, null, ex);
                    }}      
            }
       }).start();
       // Srarting the thread
    }
    
    @Override
    public void start(Stage primaryStage) {
        // PLACING THE GUI
        // 1- TEXT AREA
        ta = new TextArea("Chat Messages : \n");
        // DISABLING THE EDITING 
        ta.setEditable(false);
        
        // 2- TEXT FIELD
        tf = new TextField();
        tf.setPromptText("Enter your message");
        
        // 3- Label
        l = new Label("Enter the message");
        
        // 4- Button
        b = new Button();
        b.setText("Send");
        b.setDefaultButton(true);
        
        // Action listener
        b.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                print_stream.println(tf.getText());   // Printing the stream in the text field
                tf.setText("");                       // Clearing the text field
            }
        });
        
        // PLACING GUI
        BorderPane root = new BorderPane();
        FlowPane s_box = new FlowPane(l, tf, b);
        
        root.setCenter(ta);
        root.setBottom(s_box);
        
        Scene scene = new Scene(root, 300, 250);
        
        primaryStage.setTitle("Client Chat");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
    
    
    // TERMINATIONS in stop method
    @Override
    public void stop() throws Exception {
        super.stop();
        
        th.stop();
        data_in.close();
        print_stream.close();
        my_Socket.close();
    }

    public static void main(String[] args) {
        Application.launch(args);
    }
}