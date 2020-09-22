import java.io.FileWriter;
import java.io.IOException;
class file1{
public static void main(String args[]) throws IOException{
String s="welcome to file handling";
FileWriter f=new FileWriter("myfile");
for(int i=0;i<s.length();i++) f.write(s.charAt(i));
f.close();
}
}
