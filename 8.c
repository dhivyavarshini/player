#include<stdio.h>
int main()
{
    char x[30];
    int i;
    printf("enter string");
   scanf("%[^\n]s",&x);
    x[0]=x[0]-32;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
        {
        	i++;
            x[i]=x[i]-32;
        }
    }
    printf("%s",x);
    return 0;
}
