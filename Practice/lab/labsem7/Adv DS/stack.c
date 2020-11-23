#include<stdio.h>
#include<malloc.h>


//Global stack variables
int *stack;  //array to store elements
int top;	//pointer to the top of stack
int size;	//current size of stack, a function may be implemented to double size when needed


void create_stack(){
	size=100;
	stack=(int *)malloc(100);  //assigning array
	if(stack==NULL) printf("$ EXCEPTION: Memory not allotted\n");
	top=-1;
}

void push(int val){
	if(top==size-1){      //check for case when size is full
		printf("$ Stack size full!\n");
		return;
	}
	top++;  		//incrementing top variable
	stack[top]=val; //pushing value
	
}

int pop(){
	if(top==-1){		//check for case to avoid pops when stack is empty
		printf("$ Stack empty! Invalid POP operation..\n");
		return -1;
	}
	int s=stack[top];   //storing variable at top of stack
	top--;				//decrementing point
	return s;
}
int stack_top(){
	if(top==-1){
		printf("Stack empty! Invalid TOP operation..\n");
		return -1;
	}
	return stack[top];
}

main(){
	int tp;
	create_stack();  //creating stack
	
	//call to check current top element
	printf("CHECKING TOP ELEMENT FROM EMPTY STACK..\n");
	tp=stack_top();
	(tp!=-1?printf("$ Current top element - %d\n",tp):tp);
	
	//pushing element to stack
	printf("PUSHING..\n");
	push(2);
	
	//call to check current top element
	printf("CHECKING TOP ELEMENT..\n");
	tp=stack_top();
	(tp!=-1?printf("$ Current top element - %d\n",tp):tp);
	
	//pushing element to stack
	printf("PUSHING..\n");
	push(5);
	
	//pushing element to stack
	printf("PUSHING..\n");
	push(11);
	
	//call to check current top element
	printf("CHECKING TOP ELEMENT..\n");
	tp=stack_top();
	(tp!=-1?printf("$ Current top element - %d\n",tp):tp);
	
	//removing element to stack
	printf("POPPING..\n");
	tp=pop();
	printf("$ Popped element - %d\n",tp);
	
	//call to check current top element
	printf("CHECKING TOP ELEMENT..\n");
	tp=stack_top();
	(tp!=-1?printf("$ Current top element - %d\n",tp):tp);
	
	//removing element to stack
	printf("POPPING..\n");
	tp=pop();
	printf("$ Popped element - %d\n",tp);
	
	//removing element to stack
	printf("POPPING..\n");
	tp=pop();
	printf("$ Popped element - %d\n",tp);
	
	//trying extra pop() when stack is empty
	printf("POPPING FROM EMPTY STACK..\n");
	pop();
}
