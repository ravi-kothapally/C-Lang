#include <stdio.h>
void main()
{
 	float v,r,a;
	printf("enter the radius of the sphere");
	scanf("%f",&r);
	if (r>=0)
	{v=4/(float)3*3.14*r*r*r;
	a=4*3.14*r*r;
	printf("area of the sphere with radius %f is %f \n",r,a);
	printf("volume of the sphere is %f \n",v);}
	else
	printf("radius should not be negative \n");
}
