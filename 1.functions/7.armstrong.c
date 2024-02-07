#include<stdio.h>
int reverse(int n)
{ 	int r,num=0;
 	while(n!=0)
	{r=n%10;
	num=num+r*r*r;
	n/=10;
	}
	return num;
}
	
void main()
{
	int n,num,n1;
	printf("enter a number");
	scanf("%d",&n);
	n1=n;
	num=reverse(n);
	if(n1==num)
	printf("%d is a palindrone",num);
	else
	printf("%d is not palindrone",n1);
}
