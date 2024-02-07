#include <stdio.h>
void main()
{ int n,i=1,c=0,d=1;
 	printf("which number prime factors do u want?");
	scanf("%d",&n);
	while(i<=n)
	{	
		if (n%i==0)
		{    while (d<=i)
		    {if (i%d==0)
			d++;
		  	c++;
		         if((c==2)&&(c<3)&&(c>1))
		          printf("%d is a prime factor\n",i);}
		
		}
		i++;
		
	}
	 
}	
