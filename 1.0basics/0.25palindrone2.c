#include <stdio.h>
void main()
{int a,sum;
	printf("enter a number");
	scanf("%d",&a);
	while(a<=100)
	{sum=sum+a;
	a++;
	}
	printf("%d is sum",sum);
}
