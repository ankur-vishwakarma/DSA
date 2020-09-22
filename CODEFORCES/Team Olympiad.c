#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	int o=0,to=0,t=0,po[n],pto[n],pt[n],lol;
	for(i=0;i<n;i++)
	{
		if(s[i]==1)
		{
			po[o]=i+1;
			o++;
		}
		else if(s[i]==2)
		{
			pto[to]=i+1;
			to++;
		}
		else if(s[i]==3)
		{
			pt[t]=i+1;
			t++;
		}
	}
    if(o==0||to==0||t==0)
    {
        printf("0");
        return 0;
    }
    else
    {
    if(o<=to&&o<=t) lol=o;
	else if(to<=o&&to<=t) lol=to;
	else lol=t;
	printf("%d\n",lol);
	for(i=0;i<lol;i++)	printf("%d %d %d\n",po[i],pto[i],pt[i]);
    }
}
