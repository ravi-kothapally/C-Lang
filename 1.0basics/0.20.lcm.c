#include <stdio.h>
void main()
{ int a,b,i,g;
	printf("enter two nuumbers");
	scanf ("%d%d",&a,&b);
	while(1)
	if (a>b)
	{
		i=2;
		while(1)
		{	
			if ((b*i)%a==0)
		 	{
				printf("%d is l.c.m",b*i);
				break;
			}

			i++;
		}break;
	}
	
	else
	{
		g=a;
		a=b;
		b=g;
	}
}
		
