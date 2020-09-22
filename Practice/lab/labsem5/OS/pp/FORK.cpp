#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
	
	int p;
	p=fork();
	//at parent greater than 0 is return and at
	//child less than 0 is return and function start execution from 
	//next line
	if (p>0){
		printf("you are in parent process:%d",p);
	}
	else 
	printf("child process:%d",p);
	return 0;
}
