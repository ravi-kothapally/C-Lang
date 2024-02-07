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
	struct student s,k;
		
		printf("enter name    :");
		scanf("%s",k.name);
		printf("enter roll no :");
		scanf("%d",&k.rollno);
		printf("enter id      :");
		scanf("%s",k.id);
		printf("enter adress  :");
		scanf("%s",k.ad);
                s=k;
		printf("\n\nDetails of student \n");
		printf("name    :%s\n",s.name);
		printf("roll no :%d \n",s.rollno);
		printf("id      :%s\n",s.id);
		printf("adress  :%s\n",s.ad);
			
	   
		
}
