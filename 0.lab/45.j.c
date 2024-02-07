#include<stdio.h>
int mystrlen(char *s)
{	int i=0;
	while(s[i]!='\0')
	{ i++;
	}
	return i;
}
char *myreplace(char *s1,char *s2,char *s3)
{
	int i=0,j=0,ls1,ls2,ls3,p=0,l=0,q=0;
        ls1=mystrlen(s1);
        ls2=mystrlen(s2);
        ls3=mystrlen(s3);
        while(s2[i]!='\0')
        {
             if(s2[i]==s1[j])
              {  i++;j++;
                if(i==ls2)
                break;}
             else
             {
               l++;j=l;i=0;
             }
         }
	if(i==ls2)
	{	 p=j-ls2;
		 for(i=p,j=0;i<p+ls3;i++,j++)
		 {
		     s1[i]=s3[j];
		 }
	}
         return s1;
}		
void main()
{
	static char s1[100],s2[100],s3[100],*s;
	printf("string 1");
	scanf("%s",s1);
	printf("string 2");
	scanf("%s",s2);
	printf("string 3");
	scanf("%s",s3);
	s=myreplace(s1,s2,s3);
	printf("%s\n",s);
}

