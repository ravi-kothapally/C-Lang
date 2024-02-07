#include <stdio.h>
void main()
{	int a,b,k;
  	printf("enter two numbers ");
	scanf("%d%d",&a,&b);
	if (a>b)
	 {
		 if (a%b==0)
			 printf("%d is gcd",b);
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
			}
	  	}
	}
	else 
	  {
		if (b%a==0)
		printf("%d is gcd",a);
	        else
	        { 
			k=a/2;
			while(k>0)
			{
				if ((a%k==0)&&(b%k==0))
		 		{
		 			printf("%d is gcd",k);
		 			break;
		 		}
				k--;
			}
	   	} 	 
	 }
}
