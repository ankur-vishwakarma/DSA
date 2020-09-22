import java.util.*;
public class prime{
public static void main(String arg[]){
int flag=0;
System.out.println("2");
for(int i=3;i<101;i++){
for(int j=2;j<i/2;j++){
if(i%j==0){
flag=1;
break;
}
}
if(flag!=1) System.out.println(+i);
flag=0;
}
}
}
