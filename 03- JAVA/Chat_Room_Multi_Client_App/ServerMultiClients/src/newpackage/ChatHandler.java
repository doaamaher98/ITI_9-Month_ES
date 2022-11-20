package newpackage;


import java.net.ServerSocket;
import java.net.Socket;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.Vector;
import java.util.logging.Level;
import java.util.logging.Logger;

// 2- For handling multiple clients into a static vector of vitrual sockets
public class ChatHandler extends Thread{
    // REFERENCES
    Socket control_socket;
    
    DataInputStream data_in;
    PrintStream print_stream;
    
    // Defining the static Vector
    static Vector<ChatHandler> clientsVector = new Vector<ChatHandler>();
    
    // Constructor
    public ChatHandler(Socket control_socket) {
        
        this.control_socket = control_socket;
        
        try {    
            // Getting Streams (Datainput & Output) from client
            data_in = new DataInputStream(control_socket.getInputStream());
            print_stream = new PrintStream(control_socket.getOutputStream());
            
            // Adding it to Vector
            clientsVector.add(this);
            start();
            
        } 
        catch (IOException ex) {
            Logger.getLogger(ChatHandler.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    // Run method
    public void run()
    { 
        while (true)
        {
                try {
                        String string = data_in.readLine();
                        sendMessagetoAll(string);
                    }
                    catch (IOException ex) {
                try {
                    // TERMINATING
                    this.stop();
                    data_in.close();
                    print_stream.close();
                    control_socket.close();
                
            } catch (IOException esx) {
                Logger.getLogger(ChatHandler.class.getName()).log(Level.SEVERE, null, ex);
            }}
        }
}
        
    
    void sendMessagetoAll(String s)
    {
        // Enhanced for loop for looping through the Vector
        for (ChatHandler ch : clientsVector)
        {
            ch.print_stream.println(s + " " + ch.getId());
        }
    }
}
