#include <stdio.h>
void main()
{int a,sum=0,n;
	printf("enter a number");
	a=1;
	scanf("%d",&n);
	while(a<=n)
	{sum=sum+a;
	a++;
	}
	printf("%d is sum",sum);
}
