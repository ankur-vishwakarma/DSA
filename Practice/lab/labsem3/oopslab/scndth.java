import java.util.*;
class th extends Thread{
public void run(){
if(getName()=="th0") System.out.println("im 1 running");
else System.out.println("i m 2");
}
}
public class scndth{
public static void main(String args[]){
th obj=new th();
th obj2=new th();
obj.setName("th0");
obj.start();
obj2.start();
}
}
