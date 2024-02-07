#include <stdio.h>
void main()
{
	int a,b,n,fm,sm;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if (a>b)
	{fm=a;sm=b;}
	else 
	{fm=b;sm=a;}
	do{
	scanf("%d",&n);
	if(n>fm){
	         sm=fm;fm=n;}
	else{
		if(n>sm){
			sm=n;}
	    }
	}while(n!=-1);
	printf("second max is %d\n",sm);
}
		
