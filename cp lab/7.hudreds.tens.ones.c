#include <stdio.h>
void main()
{
	int a,o,t1,t,h1,h,th;
	printf("four digit number");
	scanf("%d",&a);
	o=a%10;
	t1=a/10;
	t=t1%10;
	h1=a/100;
	h=h1%10;
	th=a/1000;
	printf("%d thousands\n",th);
	printf("%d hundreds\n",h);
	printf("%d tens \n",t);
	printf("%d ones \n",o);
} 
