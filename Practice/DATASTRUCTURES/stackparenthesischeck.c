#include<stdio.h>
char stack[51];
int top=-1;
int flag=0;
void push(char c)
{
	stack[++top]=c;
}
char pop()
{
	char temp=stack[top];
	top--;
	return temp;
}
void check(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='[') push(s[i]);
		else if(s[i]==')'||s[i]=='}'||s[i]==']')
		{
			char ch=pop();
			if(s[i]==')'&&ch!='(')
			{
				flag=1;
				break;
			}
			else if(s[i]=='}'&&ch!='{}')
			{
				flag=1;
				break;
			}
			else if(s[i]==']'&&ch!='[')
			{
				flag=1;
				break;
			}
		}
		i++;
	}
	if(flag==1) printf("incorrect exp");
	else printf("correct");
}
main()
{
	char f[50];
	scanf("%s",f);
	check(f);
}
