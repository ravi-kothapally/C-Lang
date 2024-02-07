/*recieve 5 numbers .print avg and sum in main*/
#include<stdio.h>
#include<stdlib.h>
void sum(int a[],int *add,int *avg);
void main()
{
	int a[5],add=0,avg,i;
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	sum(a,&add,&avg);
	printf("%d\n%d",add,avg);
}
void sum(int a[],int *add,int *avg)
{
	int i;
	for(i=0;i<5;i++)
	*add+=a[i];
	*avg=*add/5;
}
