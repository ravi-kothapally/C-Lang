#include<stdio.h>
void main()
{	struct book
	{
		char n[20];
		float p;
		int pa;
	}b1,b2,b3;
	struct book b4={"let us c",279,630};	
	b1=b4;b2=b4;b3=b4;
	printf("%s %f %d\n",b1.n,b1.p,b1.pa);
	printf("%s %f %d\n",b2.n,b2.p,b2.pa);
	printf("%s %f %d\n",b3.n,b3.p,b3.pa);
	printf("%s %f %d\n",b4.n,b4.p,b4.pa);
	
}


