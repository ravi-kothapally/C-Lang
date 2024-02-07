#include<stdio.h>
void main()
{ 
 	 int a[100],n,i,e=0,o=0;
	 printf("how many num u want");
	 scanf("%d",&n);
 	 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 	 for(i=0;i<n;i++)
	{	
	        if(a[i]%2==0)
		{
		 	e++;
			}
		else{
			o++;}
	}
	  printf("odd num is %d",o);
	  printf("even number %d",e);
	
	
}

