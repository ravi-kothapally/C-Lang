#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	char id[7];
	char ad[300];
};
void main()
{	int i,n;
	struct student s;
		printf("enter name    :");
		scanf("%s",s.name);
		printf("enter roll no :");
		scanf("%d",&s.rollno);
		printf("enter id      :");
		scanf("%s",s.id);
		printf("enter adress  :");
		scanf("%s",s.ad);
		printf("Details of student \n");
		printf("name    :%s\n",s.name);
		printf("roll no :%d \n",s.rollno);
		printf("id      :%s\n",s.id);
		printf("adress  :%s\n",s.ad);
			
	
		
}
