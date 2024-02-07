#include<stdio.h>
void main()
{	int a[1000],n,i,j=2,lcm,max=-9999999,f;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	lcm=max;
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(lcm%a[i]!=0)
				f++;
		}
		if (f==0)
		{	printf("%d is the lcm",lcm);
			break;
		}
		else
		{	lcm=max*j++;
			
			f=0;
		}
	}
}
			
