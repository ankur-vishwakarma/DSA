#include <stdio.h>
main()
{
	int y,m,d,cd,cm,cy,bd,bm,by;
	printf("enter birth date");
	scanf("%d",&bd);
	printf("enter birth month");
	scanf("%d",&bm);
	printf("enter birth year");
	scanf("%d",&by);
	printf("enter current date");
	scanf("%d",&cd);
	printf("enter current month");
	scanf("%d",&cm);
	printf("enter current year");
	scanf("%d",&cy);
	if(cy>by||cy==by) y=cy-by;
	else 
	{
		printf("u r yet nt born");
		goto end;
    }
    if(cm>bm||cm==bm) m=cm-bm;
    else
    {
    	y=y-1;
    	m=12-(bm-cm);
	}
	if(cd>bd||cd==bd) d=cd-bd;
    else if(((cm==1||cm==3)||(cm==5||cm==7))||((cm==8||cm==10)||(cm==12)))
          {
          	d=31-(bd-cd);
          	m=m-1;
          	if(cm>bm||cm==bm) y=y-1;
		  }
		  else if(cm==2)
		  {
		  	d=28-(bd-cd);
          	m=m-1;
          	if(cm>bm||cm==bm) y=y-1;
		  }
		  else
		  {
		  	d=30-(bd-cd);
          	m=m-1;
          	if(cm>bm||cm==bm) y=y-1;
		  }
 printf("your age is %d years, %d months and %d days",y,m,d);
 end:
 	printf(" ");
}
