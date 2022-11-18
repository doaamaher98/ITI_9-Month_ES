import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class Bonus {
    public static void main(String[] args) throws IOException  {
         // Path of file where data is to copied
        File source = new File("D:\\Doaa Maher\\0000-ITI-9M\\04- Week 5\\f1_source");
        // Path of file whose data is to be copied
        File destination = new File("D:\\Doaa Maher\\0000-ITI-9M\\04- Week 5\\f2_destination");
 
        copyFolder(source,destination);
    }

    public static void copyFolder(File source, File destination)
    {
    // Checks if source is directory or not
    if (source.isDirectory())
    {
        if (!destination.exists())
        {
            destination.mkdirs();
        }

        String files[] = source.list();

        for (String file : files)
        {
            File srcFile = new File(source, file);
            File destFile = new File(destination, file);

            copyFolder(srcFile, destFile);
        }
    }
    // Source is not directory, so it's a file
    else
    {
        // Input & Output stream objects are intialized with null
        InputStream in = null;
        OutputStream out = null;

        try
        {
            /////////////////////////////////////////
            in = new FileInputStream(source);
            out = new FileOutputStream(destination);
            /////////////////////////////////////////
            byte[] buffer = new byte[1024];

            int length;
            
            while ((length = in.read(buffer)) > 0)
            {
                out.write(buffer, 0, length);
            }
        }
        catch (IOException e)
        {
            try
            {
                in.close();
            }
            catch (IOException e1)
            {
                e1.printStackTrace();
            }
///////////////////////////////////////////
            try
            {
                out.close();
            }
            catch (IOException e1)
            {
                e1.printStackTrace();
            }}}}}