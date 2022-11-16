package fxpackage;

//import java.awt.Rectangle;
import javafx.scene.shape.Rectangle;

import java.io.File;
import javafx.application.Application;
import javafx.geometry.Pos;

import javafx.scene.Scene;
import javafx.scene.effect.Reflection;

import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.paint.CycleMethod;
import javafx.scene.paint.LinearGradient;
import javafx.scene.paint.Stop;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;
import javafx.scene.text.Text;

public class HelloFX extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        
        Text hello = new Text("Hello Java FX");
        Rectangle rect = new Rectangle(300,250);
        
        StackPane root = new StackPane();
        
        Reflection reflection = new Reflection();
        reflection.setFraction(0.6);
        
        //rect.setId("rect");
        hello.setId("text");
        
        hello.setEffect(reflection);
        
        root.getChildren().add(rect);
        root.getChildren().add(hello);
        
        Scene scene = new Scene(root, 300, 250);
        
        File f = new File("src/fxpackage/appStyle.css");
        scene.getStylesheets().clear();
        scene.getStylesheets().add("file:///" + f.getAbsolutePath().replace("\\", "/"));

        
         // create stops
        Stop[] stop = {new Stop(0, Color.BLACK),new Stop(0.5, Color.WHITE),  new Stop(1, Color.BLACK)};
        // create a Linear gradient object
        LinearGradient linear_gradient = new LinearGradient(0, 1,0, 0, true, CycleMethod.NO_CYCLE, stop);
        rect.setFill(linear_gradient);
       
        primaryStage.setTitle("Hello World!");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        Application.launch(args);
    }
}
