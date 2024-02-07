#include<stdio.h>
void calcy(int op,int a,int b)
{	int c;
	do
	{printf("1.add\n2.subtract\n3.multiply\n4.divide\n5.modulo\n6.exit\n");
	scanf("%d",&op);
	switch(op)
	{case 1:c=a+b;
		printf("                          ans=%d\n",c);
		break;
	 case 2:c=a-b;
		printf("                          ans=%d\n",c);
		break;
	 case 3:c=a*b;
		printf("                          ans=%d\n",c);
		break;
	 case 4:c=a/b;
		printf("                          ans=%d\n",c);
		break;
	 case 5:c=a%b;
		printf("                          ans=%d\n",c);
		break;
	 case 6:printf("visit again for best services\n");
		break;
	default:printf("                   invalid option\n");
}}while(op!=6);
}
void main()
{
	int op,a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	calcy(op,a,b);
}
