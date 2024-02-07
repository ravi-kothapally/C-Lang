#include<stdio.h>
void main()
{
	int d,m,y;
	printf("enter date month year");
	scanf("%d%d%d",&d,&m,&y);
	switch(m)
	{
		case 1:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,jan,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 2:if((d>0)&&(y>0)&&(d<=29))
			{
				if(d==29)
				{
					if(y%4==0)
		 	  		printf("%d,feb,%d",d,y);
			 		  else
			 	  	printf("invalid");
				 }
			
				if(d<29)
				printf("%d,feb,%d",d,y);
			}
			else
			 printf("invalid");
			break;
		case 3:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,mar,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 4:if((d>0)&&(y>0)&&(d<=30))
			printf("%d,apr,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 5:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,may,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 6:if((d>0)&&(y>0)&&(d<=30))
			printf("%d,jun,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 7:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,jul,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 8:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,aug,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 9:if((d>0)&&(y>0)&&(d<=30))
			printf("%d,sep,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 10:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,oct,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 11:if((d>0)&&(y>0)&&(d<=30))
			printf("%d,nov,%d",d,y);
			 else
			 printf("invalid");
			break;
		case 12:if((d>0)&&(y>0)&&(d<=31))
			printf("%d,dec,%d",d,y);
			 else
			 printf("invalid");
			break;
		default:printf("invalid");
	}
	
}
