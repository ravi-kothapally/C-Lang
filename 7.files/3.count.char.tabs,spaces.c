//count chars ,spaces,tabs,&newlines
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	int l=0,t=0,b=0,c=0;
	fp=fopen("3.count.txt","r");
	if(fp==NULL)
	{
		puts("cannot open");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{c++;
		break;}
		if(ch==' ')
		b++;
		if(ch=='\n')
		l++;
		if(ch=='\t')
		t++;
		if(ch>-127&&ch<128)
		c++;
	}
	printf("lines =%d\ntabs =%d\nblanks =%d\ncharacters =%d\n",l,t,b,c);
}
