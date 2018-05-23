#include<stdio.h>
int main()
{
int l,r,i,j,count=0,cout=0;
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
        count++;
        }
    }
    if(count==2)
    {
    cout++;
    }
    count=0;
}
printf("\n%d",cout);
return 0;
}
