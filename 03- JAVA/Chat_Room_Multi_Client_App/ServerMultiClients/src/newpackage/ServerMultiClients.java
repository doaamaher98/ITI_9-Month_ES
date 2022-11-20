package newpackage;

import java.net.ServerSocket;
import java.net.Socket;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

// 1st class : for multiple clients entry
public class ServerMultiClients {
    // References
    ServerSocket myServerSocket;
    Socket socket;
    
    // Constructor
    public ServerMultiClients(){
        
        try {
            // Creating a Server socket to a port
            myServerSocket = new ServerSocket(5010);
            while (true)
            {
                socket = myServerSocket.accept();
                // Passing this socket to the chat handler to make a vector for each VIRTUAL socket
                new ChatHandler(socket);
            }
        } catch (IOException ex) {
            Logger.getLogger(ServerMultiClients.class.getName()).log(Level.SEVERE, null, ex);
        }
         
    }
    
    public static void main(String[] args) {
        new ServerMultiClients();
        
    }
    
}
