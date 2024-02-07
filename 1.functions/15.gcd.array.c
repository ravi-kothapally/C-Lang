#include<stdio.h>
int findgcd(int a[],int min,int n)
{	int i,c,k;
	for(i=0;i<n;i++)
        {    c=0;
		if(a[i]%min!=0)
	        {
                   c=1;
                   break;
                }
                
         }
             if(c==0)
             return min;
     	     else
             {
                k=min/2;
                while(1)
		{     c=0;
                      for(i=0;i<n;i++)
                      {
		 	if(a[i]%k!=0)
		 	c=1;
                      }
		  if(c==0)
		  {
			return k;
			break;
		  }
		  k--;
	         }
	     }
}
int mini(int a[],int n)
{	int i,min=99999999;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		 min=a[i];
        }
	return min;
}
void main()
{	int a[100],i,n,min,gcd;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	min=mini(a,n);
	printf("%d is min\n",min);
	gcd=findgcd(a,min,n);
	printf("%d is gcd",gcd);
}

