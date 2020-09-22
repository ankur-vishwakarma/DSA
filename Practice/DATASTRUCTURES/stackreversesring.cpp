#include<stdio.h>
char stack[100];
int top=-1;
void push(char val)
{
	stack[++top]=val;
}
char pop()
{
	char temp=stack[top];
	top--;
	return temp;
}
void reverse(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		push(s[i]);
		i++;
	}
	i=0;
	while(top!=-1)
	{
		s[i]=pop();
		i++;
	}
	printf("reversed string: %s",s);
}
main()
{
	char f[100];
	printf("enter string:  ");
	scanf("%s",f);
	reverse(f);
}
