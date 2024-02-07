#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	char id[7];
	char ad[300];
};
void print(struct student s[],int n)
{	
	int i;
	for(i=0;i<n;i++)
	{	printf("Details of student %d\n",i+1);
		printf("name    :%s\n",s[i].name);
		printf("roll no :%d \n",s[i].rollno);
		printf("id      :%s\n",s[i].id);
		printf("adress  :%s\n",s[i].ad);
		printf("\n\n");
	}
}
void main()
{
	int i,n;
	struct student s[10];
	printf("no of students=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("studet %d\n",i+1);
		printf("enter name    :");
		scanf("%s",s[i].name);
		printf("enter roll no :");
		scanf("%d",&s[i].rollno);
		printf("enter id      :");
		scanf("%s",s[i].id);
		printf("enter adress  :");
		scanf("%s",s[i].ad);
	}
	print(s,n);
}
