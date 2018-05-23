#include <stdio.h>
#include<string.h>

int main(void) {
	char a[20],b[20];
	int c=0,i,n1,n2;
	scanf("%s %s",&a,&b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1==n2)
	{
	for(i=0;i<n1;i++)
	{
		if(a[i]!=b[i])
		{
			c++;
		}
		
	}
	if(c==1)
	{
		printf("yes");
	}
	
	else
	{
		printf("no");
	}
	}
	else
	{
		printf("no");
	}
	return 0;
}
