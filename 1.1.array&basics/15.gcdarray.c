#include<stdio.h>
void main()
{	int a[100],i,min=999999,k,n,c=0;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		 min=a[i];
        
	}
         
	for(i=0;i<n;i++)
        {    c=0;
		if(a[i]%min!=0)
	        {
                   c=1;
                   break;
                }
                
         }
             if(c==0)
            {
              printf("%d is gcd",min);
              break;
             } 
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
			printf("%d is the gcd",k);
			break;
		  }
		  k--;
	         }
	     }
}
