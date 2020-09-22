import java.util.*;
class thone extends Thread{
public void run(){
System.out.print("i m running");
}
}
public class firstth {
public static void main(String args[]){
thone obj=new thone();
obj.start();
}
}
