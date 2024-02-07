#include<stdio.h>
int findlcm(int a[],int max,int n)
{	
	int i,k=1,f=0;
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(max*k%a[i]!=0)
				f++;
		}
		if (f==0)
		{	return max*k;
			break;
		}
		else
		{	
			k++;f=0;	
		}
	}
}
						
int maxi(int a[],int n)
{ 	int max=-999999,i;
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
void main()
{	
	int n,max,lcm,i,a[100];
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=maxi(a,n);
	printf("%d is max\n",max);
	lcm=findlcm(a,max,n);
	printf("%d is lcm\n",lcm);
}
