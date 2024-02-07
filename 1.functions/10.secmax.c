#include <stdio.h>
int secmax(int a,int b)
{	int n,fm,sm;
	if (a>b)
	{fm=a;sm=b;}
	else 
	{fm=b;sm=a;}
	do{
	printf("enter num");
	scanf("%d",&n);
	if(n>fm){
	         sm=fm;fm=n;}
	else{
		if(n>sm&&n!=fm){
			sm=n;}
	    }
	}while(n!=-1);
	return sm;
}

void main()
{
	int a,b,ans;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	ans=secmax(a,b);
	printf("%d is sec max",ans);
}
