class volumej{
public static void main(String args[]){
class v{
int l,b,h,volu;
void get(int a,int n,int c){
l=a;
b=n;
h=c;
}
void vol(){
volu=l*b*h;
}
void dis(){
System.out.println("volume="+volu);
}
};
v ob=new v();
ob.get(3,4,5);
ob.vol();
ob.dis();
}
}
