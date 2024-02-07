#include <stdio.h>
void main ()
{
	int m;
	printf("enter your marks\n");
	scanf("%d",&m);
	if (m>=90 && m<=100)
	printf("A+\n");
	else if (m>=80 && m<90)
	printf("A\n");
	else if (m>=70 && m<80)
	printf("B\n");
	else if (m>=60 && m<70)
	printf("C\n");
	else if (m>=50 && m<60)
	printf("D\n");
	else if (m>=40 && m<50)
	printf(" you are just pass\n");
	else if (m<40)
	printf("you are fail \n");
}
