import java.io.FileNotFoundException; 
import java.io.FileReader; 
import java.io.IOException; 
class filereader 
{ 
    public static void main(String[] args) throws IOException 
    { 
        int ch; 
        FileReader fr=null; 
        try
        { 
            fr = new FileReader("myfile"); 
        } 
        catch (FileNotFoundException fe) 
        { 
            System.out.println("File not found"); 
        } 
        while ((ch=fr.read())!=-1) 
            System.out.print((char)ch); 
        fr.close(); 
    } 
} 
