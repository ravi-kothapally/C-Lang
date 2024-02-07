#include <stdio.h>
void main()
{ int a,b,op,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
do
{	printf("1.add\n2.subtract\n3.multiply\n4.divide\n5.modulo\n6.exit\n");
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
