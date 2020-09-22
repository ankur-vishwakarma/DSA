#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

int mutex=1,full=0,empty=4,x=0;

   wait(int *s){
   
   //printf("full=%d",*s);
   while(*s<=0);
	*s=*s-1;
//	printf("go\n");
}
 
 signal(int *f)
{
	*f=*f+1;
		//printf("come\n");

}

void* producer(void * arg)
{
	sleep(2);

	wait(&mutex);
	signal(&full);
	wait(&empty);
//	x++;
	printf("\nProducer produces the item ",x);
	signal(&mutex);
	return NULL;
}
//int mutex=1,full=0,empty=4,x=0;


 

void consumer()
{
	sleep(1);
    //wait(&mutex);
    //printf("full=%d",full);
	wait(&full);
	signal(&empty);
    printf("\nConsumer consumes item ",x);
//	x--;
	signal(&mutex);
}
 
int main()
{
	while(empty!=0){
	
	int n;
	pthread_t newthread;
	pthread_create(&newthread,NULL,producer,NULL);
	consumer();
	
	}
	
	return 0;
}

 

