#include<stdio.h>
void main()
{ int max=-99999999,n;
	printf("enter a number");
	do{
	scanf("%d",&n);
	if (n>max)
	max=n;
	printf("max is %d\n",max);
	printf("if u want to continue,enter another number\n");
	printf("enter -1 to end\n");
	}while(n!=-1);
	printf("max number is %d\n",max);
}
