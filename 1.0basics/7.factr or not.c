# include <stdio.h>
void main()
{ int a,b;
 printf("enter rwo numbers");
scanf("%d%d",&a,&b);
if (a>b)
{ if (a%b==0)
printf("%d is factor\n",b);
else
printf("%d is not a factor\n",b);
}
