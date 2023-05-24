#include<stdio.h>
int main()
{
    float n,i,sum=0,a;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        a=1/(i+1);
        sum=sum+a;
    }
    printf("%.2f",sum);
}