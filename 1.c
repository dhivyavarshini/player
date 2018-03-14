#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j,p=0;
    printf("enter the string:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        p++;
    }
    j=0;
    for(i=p-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    printf("reversed string:%s",b);
    return 0;
}
