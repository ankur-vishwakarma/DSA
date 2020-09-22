import java.util.*;
public class thread1 extends Thread{
public void run(){
System.out.print("i m running");
}
public static void main(String args[]){
thread1 obj=new thread1();
obj.start();
}
}
