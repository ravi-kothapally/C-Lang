#include<stdio.h>
void main()
{
	int i=50,a[3]={1,2,3};
	int *p,*q;
	p=&i;
	q=a;
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",&p);
	printf("%d\n",i);
	printf("%d\n",&i);
	printf("%d\n",p+1);
	printf("%d\n",*(p+2));
	printf("%d\n",p[1]);
	printf("%d\n",q);
	printf("%d\n",*(q+2));
	printf("%d\n",*(q+1));
	printf("*p=20;qnd *p=%d\n",*p);
}
