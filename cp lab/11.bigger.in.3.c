#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
		printf("%d is big",a);
		else
		{
			if(a>c)
			printf("%d is big",a);
			else
			printf("%d is big",c);
		}
	}
	else
	{
		if(a>c)
		printf("%d is big",a);
		else
		{
			if(b>c)	
			printf("%d is big",b);
			else
			printf("%d is big",c);
		}
	}
}
