package sample;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;


public class Main extends Application {

    private static final String FIFO = "..\\tojava";

    @Override
    public void start(Stage primaryStage) throws Exception {
        Parent root = FXMLLoader.load(getClass().getResource("sample.fxml"));
        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(root, 300, 275));
        //primaryStage.show();

        File file = new File(FIFO);
        System.out.println(file.getAbsolutePath());
        try (BufferedReader in = new BufferedReader(new FileReader(file))) {
            while (true) {
                while (in.ready()) {
                    System.out.println(in.readLine());
                }
            }
            //done, however you can choose to cycle over this line
            //in this thread or launch another to check for new input
        } catch (IOException ex) {
            //System.err.println("IO Exception at buffered read!!");
            ex.printStackTrace();
        }
    }


    public static void main(String[] args) {
        launch(args);
    }
}
