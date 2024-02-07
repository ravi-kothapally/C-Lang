#include <stdio.h>
void main()
{int a,b,g;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		if (a%b==0)
		printf("%d is factor of %d",b,a);
		else
		printf("%d is not a factor of %d",b,a);
	}
	else
	{g=a;
	 b=a;
	b=g;}
}
