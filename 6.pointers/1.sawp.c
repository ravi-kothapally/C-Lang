#include<stdio.h>
void swap(int* c,int* d)
{
	int t;
	t=*c;
	*c=*d;
	*d=t;
	printf("%d\n%d\n",*c,*d);
}
void main()
{
	int a,b;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
        printf("%d\n%d\n",a,b);
}
