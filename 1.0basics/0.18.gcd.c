#include <stdio.h>
void main()
{	int a,b,k,g,c=0;
  	printf("enter two numbers ");
	scanf("%d%d",&a,&b);
	while(1)
	{
	    if (a>b)
	    {
		 if (a%b==0)
			 printf("%d is gcd",b); break;
	     	 else
	         {
			k=b/2;
			while(k>0)
			{
				if ((a%k==0)&&(b%k==0))
		 		{
					printf("%d is gcd",k);
		 			break;
		 		}
				k--;
			}break;
	  	}
	   }
	else 
 	{	g=a;
	  	a=b;
	  	b=g;
	}
	}
          
}
