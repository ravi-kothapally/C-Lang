#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	float f;
	printf("enter any two numbers");
	scanf("%f%f",&a,&b);
	c=a+b;d=a-b;e=a*b;f=a/(float)b;
	printf("sum =%d \ndifference=%d \nproduct=%d \nquotient=%f \n",c,d,e,f);
}
