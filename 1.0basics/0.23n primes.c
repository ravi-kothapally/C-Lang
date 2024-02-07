#include <stdio.h>
void main()
{
 	int i,n,k,l,c;
	printf("how many prime numbers do u want");
	scanf("%d",&n);
	for(i=2;c<n;i++)
	{
		l=0;
		for(k=1;k<=n;k++)
		{
			if(i%k==0)
			l++;
		}
		if (l==2)
		{
			printf("%d \n",i);
			c++;
		}
	}
}			

