#include<stdio.h>
void main()
{ 	 int n,i;
 	 char a[100];
	 printf("how many characters do u want");
	 scanf("%d",&n);
 	 for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
 	 for(i=0;i<n;i++)
	{
		printf("%c ,",a[i]);
	}
}

