#include<stdio.h>
int power(int k)

{	int j,pow;
	pow=1;
	for(j=0;j<k;j++)
	{
		pow*=16;
	}
	return pow;
}
void main()
{
	int i,sum,k,n;
	char a[100];
	gets(a);
	
	sum=0;k=0;
	for(i;i>=0;i--)
	{
		if(a[i]!=0)
		{	
			if((a[i]<58)&&(a[i]>47))
			{sum+=(a[i]-48)*power(k);
				k++;	}
		else if((a[i]>64)&&(a[i]<71))
			{sum+=(a[i]-55)*power(k);
				k++;	}
		}
		else
		break;
	}
	printf("%d",sum);
}
