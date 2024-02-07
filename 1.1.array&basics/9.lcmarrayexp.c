#include<stdio.h>
void main()
{	int a[1000],n,i,j=2,max=-9999999,f,k=1;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(max*k%a[i]!=0)
				f++;
		}
		if (f==0)
		{	printf("%d is the lcm",max*k);
			break;
		}
		else
		{	
			k++;f=0;	
		}
	}
}
			
