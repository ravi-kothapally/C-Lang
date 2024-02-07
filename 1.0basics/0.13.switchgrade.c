#include <stdio.h>
void main()
{
	int op;
	printf("choose your marks range \n1>90\n2>80\n3>70\n4>60\n5>50\n6>40\n7<40\n");
	scanf("%d",&op);
	switch (op)
	{
	 case 1:
		printf("grade is A+\n");
		break;
	 case 2:
		printf("grade is A\n");
		break;
	 case 3:
		printf("grade is B\n");
		break;
	 case 4:
		printf("grade is C\n");
		break;
	 case 5:
		printf("grade is D\n");
		break;
	 case 6:
		printf("grade is pass\n");
		break;
	 case 7: 
		printf("fail\n");
		break;
	default :
		printf("invalid option \n");}
}
	
