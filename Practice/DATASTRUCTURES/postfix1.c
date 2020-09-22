#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int val)
{
	if(top==SIZE-1) printf("Stack is full cant insert");
	else stack[++top]=val; 
}
int pop()
{
	if(top==-1) printf("stack is empty");
	return stack[top--];
}
int postfix(char s[])
{
	int i=0;
	printf("%s\n",s);
	while(s[i]!='\0')
	{
		if(s[i]>=48&&s[i]<=57) push(s[i]-'0'); /*I CHECKED WITH THIS
		IF S[i] IS A NUMBER IF IT IS THEN I PUSH IT INTO STACK
		REMEMBER TO PUSH S[I]-'0' AS S[I] IS CHARACTER ND WITH THIS
		I CONVERTED IT INTO NUMBER*/
		else
		{              //THIS ENTERD HERE MEANS S[i] IS A OPERATOR LIKE +,-
			char ch=s[i]; 
			int x=pop(); //SO WE POP TWO ELEMNTS N OPERATE
			int y=pop();
			switch(ch)
			{
				case '+': push(x+y);
				break;
				case '-':push(y-x);
				break;
				case '*':push(y*x);
				break;
				case '/':push(y/x);
				break;
				case '%':push(y%x);
					break;
			}
		}
		i++;
	}
	printf("ans=%d",pop());
}
main()
{
	char f[100];
	scanf("%s",f); // I TOOK EXPRESSION TO BE EVALUATED HERE
	postfix(f);
}
