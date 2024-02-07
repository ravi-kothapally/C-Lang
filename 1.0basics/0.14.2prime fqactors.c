#include <stdio.h>
void main()
{ int n,i=1,c=0,d;
 	printf("which number prime factors do u want?");
	scanf("%d",&n);
	while(i<=n)
	{if (n%i==0)	
		
		d=1;
                c=0;
                while (d<=i)
		{
		    if (i%d==0)
			c++;
			d++;	
                 }


                 if(c==2)
          		printf("%d is a prime factor\n",i);
          		 i++;
		
		
		
	}
	 
}	
