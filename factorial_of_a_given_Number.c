#include<stdio.h>
int main()
{
    int a,i,fac=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    fac=fac*i;
    printf("%d",fac);
}