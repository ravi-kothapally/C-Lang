#include<stdio.h>
void main()
{
	int a,b,i,t,c=0;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
		if(a>b)
		{	i=1;
			while(1)
			{
				if((a*i)%b==0)
				{printf("%d is lcm",a*i);
				
				break;
				}
				i++;
			}
		}
		else
		{
			i=1;
			while(1)
			{
				if((b*i)%a==0)
				{printf("%d is lcm",b*i);
				
				break;
				}
				i++;
			}
		}
}
