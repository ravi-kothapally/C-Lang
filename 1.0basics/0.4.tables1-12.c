#include <stdio.h>
void main()
{ int i=1,a,j=1;
	printf("which table do u want");
	scanf("%d",&a);
while(j<=12)
	{while(i<11)
	{ printf("%d,",a*i);
		i++;
	}
	j++;}
}
