#include<stdio.h>
int main()
{
    int n,i;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    
    {
        scanf("%d",&b[i]);
    }
    int al=0,bo=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            al++;
        }else if(a[i]<b[i])
        {
            bo++;
        }
    }
    printf("%d %d",al,bo);
}