import java.util.*;
public class avgarray{
public static void main(String args[]){
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int []arr=new int[n];
int sum=0;
for(int i=0;i<n;i++) arr[i]=s.nextInt();
for(int i=0;i<n;i++) sum=sum+arr[i];
float avg=sum/n;
System.out.println("avg is="+avg);
}
}



