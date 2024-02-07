#include<stdio.h>
void main()
{
	int f,s,r,n,c=0;
	printf("no of terms =");
	scanf("%d",&n);
	f=0;
	s=1;
	printf("%d,%d",f,s);
	while(c<n)
	{
		r=f+s;
		f=s;
		s=r;
		printf(",%d",r);
		c++;
	}
}
