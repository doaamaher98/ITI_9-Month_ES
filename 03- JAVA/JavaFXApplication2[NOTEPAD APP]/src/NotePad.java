import java.util.Optional;
import javafx.application.Application;
import javafx.application.Platform;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;

import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;

import javafx.scene.control.ButtonType;

import javafx.scene.control.Menu;
import javafx.scene.control.MenuBar;
import javafx.scene.control.MenuItem;
import javafx.scene.control.SeparatorMenuItem;
import javafx.scene.control.TextArea;
import javafx.scene.input.KeyCombination;
import javafx.scene.layout.BorderPane;

import javafx.stage.FileChooser;
import javafx.stage.FileChooser.ExtensionFilter;
import javafx.stage.Stage;

public class NotePad extends Application {
    ///////////////////////// Attributes /////////////////////////////////
    private String title;
    private TextArea text;
    
    private Menu file;
    private MenuItem newitem;
    private MenuItem open;
    private MenuItem save;
    private SeparatorMenuItem sep_m_item1;
    private MenuItem exit;
    
    
    private Menu edit;
    private MenuItem undo;
    private SeparatorMenuItem sep_m_item2;
    private MenuItem cut;
    private MenuItem copy;
    private MenuItem paste;
    private MenuItem delete;
    private SeparatorMenuItem sep_m_item3;
    private MenuItem select_all;
    
    private Menu help;
    private MenuItem about;
    
    private Stage primaStage;
   // private boolean saveflag;
    private String selectedstring;
  
    FileChooser fileChooser = new FileChooser();
    
    // Constructor (To be on this thread)
    public NotePad() throws Exception
    {
        // Setting up the FILE manu
//        newitem = new MenuItem("New");
//        open    = new MenuItem("Open");
//        save    = new MenuItem("Save");
//        // adding a seperator
//        sep_m_item1 = new SeparatorMenuItem();
//        exit    = new MenuItem("Exit");
//        // FIlE MENU PLACEMENT
//        file = new Menu("File", null,newitem,open,save,sep_m_item1,exit);
//        
////////////////////////////////////////////////////////////////////////////////////
//        // Setting up the EDIT manu
//        undo          = new MenuItem("Undo");
//        sep_m_item1   = new SeparatorMenuItem();
//        cut           = new MenuItem("Cut");
//        copy          = new MenuItem("Copy");
//        paste         = new MenuItem("Paste");
//        delete        = new MenuItem("Delete");
//        // adding a seperator
//        sep_m_item1   = new SeparatorMenuItem();
//        select_all    = new MenuItem("Select All");
//        // EDIT MENU PLACEMENT
//        edit = new Menu("Edit",null ,undo,sep_m_item1,cut,copy,paste,delete,sep_m_item2,select_all);
//        
////////////////////////////////////////////////////////////////////////////////////
//        // Setting up the HELP manu
//        about          = new MenuItem("About");
//        
//        // HELP MENU PLACEMENT
//        help = new Menu("Edit", null,about);
    }
    
    // Init method 
    @Override
    public void init() throws Exception
    {
        super.init();
        // Setting up the FILE manu
        newitem = new MenuItem("New");
        open    = new MenuItem("Open");
        save    = new MenuItem("Save");
        sep_m_item1 = new SeparatorMenuItem();
        exit    = new MenuItem("Exit");
        // FIlE MENU PLACEMENT
        file = new Menu("File", null,newitem,open,save,sep_m_item1,exit);
        
        // Setting up the EDIT manu
        undo          = new MenuItem("Undo");
        sep_m_item2   = new SeparatorMenuItem();
        cut           = new MenuItem("Cut");
        copy          = new MenuItem("Copy");
        paste         = new MenuItem("Paste");
        delete        = new MenuItem("Delete");
        sep_m_item3   = new SeparatorMenuItem();
        select_all    = new MenuItem("Select All");
        // EDIT MENU PLACEMENT
        edit          = new Menu("Edit", null,undo,sep_m_item2,cut,copy,paste,delete,sep_m_item3,select_all);
        
        // Setting up the HELP manu
        about          = new MenuItem("About");
        // ABOUT HELP PLACEMENT
        help           = new Menu("Help", null,about);
/////////////////////////////////////////////////////////////////
        // TEXT AREA
        text = new TextArea();
        
        // Accelerators
        newitem.setAccelerator(KeyCombination.keyCombination("Ctrl + n"));
        open.setAccelerator(KeyCombination.keyCombination("Ctrl + o"));
        copy.setAccelerator(KeyCombination.keyCombination("Ctrl + c"));
        cut.setAccelerator(KeyCombination.keyCombination("Ctrl + x"));
        paste.setAccelerator(KeyCombination.keyCombination("Ctrl + v"));
        undo.setAccelerator(KeyCombination.keyCombination("Ctrl + z"));
        save.setAccelerator(KeyCombination.keyCombination("Ctrl + s"));
        delete.setAccelerator(KeyCombination.keyCombination("Ctrl + d"));
    }
    
    // GUI
    @Override
    public void start(Stage primaryStage)  {
/////////////////////////////   ACTIONS /////////////////////////////////////////
///////////////////////////// FILE ACTIONS /////////////////////////////////////
        // NEW
        newitem.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                onNew();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // OPEN
        open.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                onOpen();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // SAVE
        save.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                OnSave();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // EXIT
        exit.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                Platform.exit();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
///////////////////////////// EDIT ACTIONS ////////////////////////////////////
        // Undo
        undo.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                text.undo();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // Copy
        copy.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                text.copy();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // Cut
        cut.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                text.cut();
                /*selectedstring = text.getSelectedText();
                text.replaceSelection(""); */
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // Paste
        paste.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                text.paste();
               // throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // Select All
        select_all.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                text.selectAll();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        // Delete
        delete.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                text.replaceSelection("");
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
///////////////////////////// HELP  /////////////////////////////
        // About
        about.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                // JavaFX dialogs
                Alert alert = new Alert(AlertType.INFORMATION);
                alert.setTitle("About");
                alert.setContentText("NotePad using JavaFX");
                alert.showAndWait();
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        
        
        MenuBar menu_bar = new MenuBar(file,edit,help);
        BorderPane pane = new BorderPane();
        pane.setTop(menu_bar);
        pane.setCenter(text);
        
        Scene scene = new Scene(pane, 450, 400);

        primaryStage.setTitle("JavaFX NotePad Project by Doaa Maher");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

////////////////////// FILE ACTIONS  /////////////////////////////////////////
    public void onNew() {
        // ASKING USER IF HE WANTS TO SAVE FIRST
        Alert alert = new Alert(AlertType.CONFIRMATION);
        alert.setTitle("Confirmation Dialog");
        alert.setHeaderText("Do You want to save this file?");
        alert.setContentText("Are you ok with this?");

        Optional<ButtonType> result = alert.showAndWait();
        if (result.get() == ButtonType.OK){
        // Creating a File chooser
          FileChooser fileChooser = new FileChooser();
          fileChooser.setTitle("Save");
          fileChooser.getExtensionFilters().addAll(new ExtensionFilter("Normal text file", "*txt*"));
         
          fileChooser.showSaveDialog(primaStage);
         }

  else {
         // Open a new file
         text.selectAll();
         text.cut();
        }
    }
    //////////////////////////////////////////////
    public void OnSave(){
        // Creating a File chooser
          FileChooser fileChooser = new FileChooser();
          fileChooser.setTitle("Save file as");
          fileChooser.getExtensionFilters().addAll(new ExtensionFilter("Normal text file", "*txt*"));
         
          fileChooser.showSaveDialog(primaStage);
         }
    
    public void onOpen()
    {
        // Creating a File chooser
          FileChooser fileChooser = new FileChooser();
          fileChooser.setTitle("Open file");
          fileChooser.getExtensionFilters().addAll(new ExtensionFilter("Normal text file", "*txt*"));
         
          fileChooser.showSaveDialog(primaStage);
    }
    
    public static void main(String[] args)  {
        Application.launch(args);
    }
}