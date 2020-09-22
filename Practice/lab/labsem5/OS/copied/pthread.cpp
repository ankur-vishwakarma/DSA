#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 


void *myThreadFun(void *vargp) 
{ 
	sleep(1); 
	printf("Printing GeeksQuiz from Thread \n"); 
	return NULL; 
} 

int main() 
{ 
	pthread_t thread_id; 
	printf("Before Thread\n"); 
	pthread_create(&thread_id, NULL, myThreadFun, NULL); //2-parameters,3-function name,4-return value
	pthread_join(thread_id, NULL); 
	printf("After Thread\n"); 
	exit(0); 
}

