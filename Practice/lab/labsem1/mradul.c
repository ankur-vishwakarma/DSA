#include<stdio.h>
int count=0;
struct student{
	int rollno;
	char name[50];
	int mobileno;
	//char email[100];
	//char college[50];
	student(int a){
		rollno=a;
		count++;
	}
};
main(){
	student s1(123);
	printf("%d %d",s1.rollno,count);
}
