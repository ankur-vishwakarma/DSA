import java.util.*;
class reverseno{
public static void main(String args[]){
Scanner s=new Scanner(System.in);
System.out.println("enter no");
int n=s.nextInt();
while(n!=0){
int k=n%10;
System.out.print(+k);
n=n/10;
}
}
}
