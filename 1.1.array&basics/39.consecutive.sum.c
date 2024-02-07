#include<stdio.h>
void main()
{
	int a[100],n,i=0,j,sum=0,k=1;
	printf("size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{	sum=a[i];
		for(i=k;i<n;i++)
		{
			if(a[i]=a[i-1]+1)
			{sum+=a[i];
			k++;}
			else
			break;
		}
	}
	printf("%d",sum);
}
