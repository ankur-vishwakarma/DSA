import java.util.*;
public class reverse{
public static void main(String args[]){
Scanner in=new Scanner(System.in);
System.out.println("enter size:");
int n=in.nextInt();
int []s=new int[n];
System.out.println("enter elements");
for(int i=0;i<n;i++) s[i]=in.nextInt();
for(int i=n-1;i>=0;i--) System.out.print(" "+s[i]);
}
}
