#include<stdio.h>
int main()
{
    int n,m=1,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    printf("%d",m);
    return 0;
}
