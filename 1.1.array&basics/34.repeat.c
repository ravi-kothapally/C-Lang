#include<stdio.h>
void main()
{ 
 	 int a[100],n,i,j,c,b[100],k=0,l;
	 printf("how many num u want");
	 scanf("%d",&n);
 	 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 	 for(i=0;i<n;i++)
	{	c=1;
		if(a[i]!=-1)
		{	for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{a[j]=-1;
				c++;}
			}
			if(c>1)
			{
				printf("%d repeated %d times\n",a[i],c);
			
			}
		}
	}
}
			
