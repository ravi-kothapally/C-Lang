#include<stdio.h>
void main()
{
	int a,b=0;
	printf("enter a numbers");
	scanf("%d",&a);
	while(a!=0)
	{ b=b+a;
	  printf("sum is %d\n",b);
	  printf("enter a number to add\npress 0 to exit\n");
	  scanf("%d",&a);
	}
	printf("thank u fr visiting..dude");
}
