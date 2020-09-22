class volumej2{
public static void main(String args[]){
class v{
int l,b,h,volu;
v(int a,int n,int c){
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
v ob=new v(3,4,5);
ob.vol();
ob.dis();
}
}
