#include<stdio.h>
void main()
{
 	struct address
	{
	char city[200];
	int pin;
	};
	struct emp
	{
	char name[20];
	int age;
	struct address a;
	};
	
	struct emp e;
	printf("enter details\n");
	printf("name  :");
	scanf("%s",e.name);
	printf("age   :");
	scanf("%d",&e.age);
	printf("city  :");
	scanf("%s",e.a.city);
	printf("pin   :");
	scanf("%d",&e.a.pin);
	printf("\n\ndetails are\n");
	printf("name : %s\n",e.name);
	printf("age  : %d\n",e.age);
	printf("city : %s\n",e.a.city);
	printf("pin  : %d\n",e.a.pin);
}
