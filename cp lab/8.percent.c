#include <stdio.h>
void main()
{
	float a,b,c;
	scanf("%f%f",&a,&b);
	if (b!=0)
	{c=a/b*100;
        printf("%f is %f percent of %f\n",a,c,b);}
	else
	printf(" b can`t be zero");
}
