#include<stdio.h>
void main()
{	int d,m,y;
	printf("enter date month year");
	scanf("%d%d%d",&d,&m,&y);
	if((d<32)&&(m<13)&&(d>0)&&(m>0)&&(y>0))
	{switch(m)
	{ 
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:if(d<31)
		d++;
		else
		{d=1;m++;}
		break;
	case 4:
	case 6:
	case 9:
	case 11:if(d<30)
		d++;
		else if(d=30)
		{d=1;m++;}
		else
		printf("invalid");
 		break;
	case 12:if(d<31)
		d++;
		else
		{d=1;m++;y++;}
		break;
	case 2:if(d<28)
		d++;
		else if(d=29)
		{ if (y%4==0)
			{d=1;m++;}
		   else
			printf("invalid");
		}
		else
		printf("invalid");
        }
	printf("%d-%d-%d",d,m,y);
        }
	else
	printf("invalid");
}

		
