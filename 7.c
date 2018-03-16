#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,j,t=0;
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
	for(i=0;i<n;i+=2)
	{
	    t=a[i];
	    a[i]=a[i+1];
	    a[i+1]=t;
	}
	printf("%s",a);
	}
	else
	{
	for(i=0;i<n;i+=2)
	{
	    t=a[i];
	    a[i]=a[i+1];
	    a[i+1]=t;
	}
	printf("%s%c",a,t);  
	}

}
