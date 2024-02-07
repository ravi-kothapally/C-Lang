#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any three numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{ if (b>c)
	  printf("%d is middle number \n",b);
	  else
	  {if (a>c)
	   printf("%d is middle number \n",c);
	   else
	   printf("%d is middle number\n",a);
	}}
	else
	{if (a>c)
	 printf("%d is middle number \n",a);
	 else
	 {if (b>c)
	 printf("%d is middle number \n",c);
	else
	 printf("%d is middle number\n",b);
	}}
}
