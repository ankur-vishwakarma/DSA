import java.util.*;
class bank{
int acc;
string name;
float balance;
void acc(int a,string b,float c){
acc=a;
name=b;
balance=c;
}
void transfer(bank dest,float amount){
if(balance>=amount){
dest.balance=dest.balance+amount;
balance=balance-amount;
}
else System.out.println("sender dont have money to transfer");
}
void display(){
System.out.println("balance is "+ balance);
}
};
public class accountj{
public static void main(String args[]){
bank acc1=new bank(212,"ankur",1000);
bank acc2=new bank(265,"lojit",1000);
acc1.transfer(aac2,200);
acc1.display();
acc2.display();
}
}
