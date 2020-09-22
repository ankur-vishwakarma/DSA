#include<stdio.h>
main()
{
	int i,w=0,bl=0,j;
	char s[8][9];
	for(i=0;i<8;i++) scanf("%s",&s[i]);
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(s[i][j]!='.')
			{
				if(s[i][j]>=97&&s[i][j]<=122)
				{
				   if(s[i][j]=='q') w=w+9;
				   else if(s[i][j]=='r') w=w+5;
				   else if(s[i][j]=='b'||s[i][j]=='n') w=w+3;
				   else if(s[i][j]=='p') w=w+1;
				}
				else
				{
					if(s[i][j]=='Q') bl=bl+9;
				   else if(s[i][j]=='R') bl=bl+5;
				   else if(s[i][j]=='B'||s[i][j]=='N') bl=bl+3;
				   else if(s[i][j]=='P') bl=bl+1;
				}
			}
		}
	}
	if(w>bl) printf("Black");
	else if(bl>w) printf("White");
	else printf("Draw");
}
