#include <stdio.h>
void main()
{ int i=1,a;
	printf("which table do u want");
	scanf("%d",&a);
	while(i<11)
	{ printf("%d,",a*i);
		i++;
	}
}
