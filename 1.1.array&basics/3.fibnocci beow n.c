#include <stdio.h>
void main()
{
	int f,s,n,r,c;
	printf("enter a number");
	scanf("%d",&n);
	f=0;s=1;
	while(f+s<n){
			r=f+s;
			f=s;
			s=r;
			printf("%d,",r);}
}
		
