#include<stdio.h>

//Global queue variables
int *queue;      
int front,rear;
int size,cur_size;

void create_queue(){
	queue=(int *)malloc(100);  //assigning array
	if(queue==NULL) printf("$ EXCEPTION: Memory not allotted\n");
	
	//initialising queue variables
	front=0,rear=-1;
	size=100;
	cur_size=0;
}

void enqueue(int val){
	if(cur_size==size){      //check for case when size is full
		printf("$ Queue size full!\n");
		return;
	}
	
	//enqueuing into queue
	rear=(rear+1)%size;
	queue[rear]=val;
	cur_size++;
}

int dequeue(){
	if(cur_size==0){    //checking for case when queue is empty
		printf("$ Queue empty! Invalid DEQUEUE operation..\n");
		return -1;
	}
	
	//dequeuing from queue
	int s=queue[front];
	front=(front+1)%size;
	cur_size--;
	return s;
}

int queue_front(){
	if(cur_size==0){
		printf("$ Queue empty! Invalid FRONT operation..\n");
		return -1;
	}
	//printf("%d %d\n",front,queue[front]);
	return queue[front];
}

main(){
	
	//creating queue
	create_queue();
	int fnt;
	
	//check element at front of queue
	printf("CHECKING FRONT ELEMENT FROM EMPTY QUEUE..\n");
	fnt=queue_front();
	((fnt!=-1)?printf("$ Current front element - %d\n",fnt):fnt);
	
	//pushing element to queue
	printf("ENQUEUING..\n");
	enqueue(3);
	
	//check element at front of queue
	printf("CHECKING FRONT ELEMENT..\n");
	fnt=queue_front();
	((fnt!=-1)?printf("$ Current front element - %d\n",fnt):fnt);
	
	//pushing element to queue
	printf("ENQUEUING..\n");
	enqueue(7);
	
	//pushing element to queue
	printf("ENQUEUING..\n");
	enqueue(2);
	
	//check element at front of queue
	printf("CHECKING FRONT ELEMENT..\n");
	fnt=queue_front();
	((fnt!=-1)?printf("$ Current front element - %d\n",fnt):fnt);
	
	//removing element from queue
	printf("DEQUEUING..\n");
	fnt=dequeue();
	printf("$ Dequeued element - %d\n",fnt);
	
	//check element at front of queue
	printf("CHECKING FRONT ELEMENT..\n");
	fnt=queue_front();
	((fnt!=-1)?printf("$ Current front element - %d\n",fnt):fnt);
	
	//removing element from queue
	printf("DEQUEUING..\n");
	fnt=dequeue();
	printf("$ Dequeued element - %d\n",fnt);
	
	//removing element from queue
	printf("DEQUEUING..\n");
	fnt=dequeue();
	printf("$ Dequeued element - %d\n",fnt);
	
	//removing element from queue
	printf("TRYING DEQUEUING FROM EMPTY QUEUE..\n");
	dequeue();
}
