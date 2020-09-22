import java.util.*;
class A{
int a;
void sum(int a){
System.out.print(a+a);
}
};
class B extends A{
int b;
B(){ b=3; }
}
class inherit{
public static void main(String args[]){
B obj=new B();
obj.sum(2);
}
}

