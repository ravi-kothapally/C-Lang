#include<stdio.h>
void main()
{ int n,ans=1;
 printf("find factorial of");
 scanf("%d",&n);
while(n!=0)
{ ans=ans*n;
  n=n-1;
}
printf("%d",ans);
}
