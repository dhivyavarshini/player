#include <stdio.h>
 
int main(void) 
{
	char x[50];
	scanf("%s",x);
	if(x[0]=='S' || x[0]=='s')
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
 
