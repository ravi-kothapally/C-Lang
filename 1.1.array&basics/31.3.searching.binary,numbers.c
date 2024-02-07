#include<stdio.h>
void main()
{
	int a[100],i,n,start,end,mid,se,c=0;
	printf("size=");
	scanf("%d",&n);
	printf("enter increasing sequence");
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i-1]>=a[i])
		{printf("not increasing\n");
		c++;
		break;}	
	}
	if(c==0)
	{printf("search a number");
	scanf("%d",&se);
	start=0;	
	end=n-1;
	while(start<=end)
	{	mid=(end+start)/2;
		if(se==a[mid])
		{printf("number present at index %d",mid);
		break ;}
		
		else if(se>a[mid])
		start=mid+1;
		else
		end=mid-1;
		
		int c=10;
		printf("%d",c);
	}
	if(start>end)
	printf("not found");
	}
}
