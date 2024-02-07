/* second max in a sequence of numbers*/
#include<stdio.h>
void main()
{	int a[100],i,fm,sm,n;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{fm=a[0];sm=a[1];}
	else
	{fm=a[1];sm=a[0];}
	for(i=2;i<n;i++)
	{
		if(a[i]>fm)
		{
			sm=fm;
			fm=a[i];
		}
		else
		{	if(a[i]!=fm){
			if(a[i]>sm)
			sm=a[i];}
		}
	}
	printf("%d is the second max",sm);
}
