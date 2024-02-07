#include <stdio.h>
void main()
{ int a,b,c,d;
	printf("enter 3 digit number");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	d=c/10;
	if (d==b)
	printf("%d is a palindrone",a);
	else
	printf("it is not a palindrone");
}
  	
