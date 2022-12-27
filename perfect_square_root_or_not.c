#include<stdio.h>
#include<math.h>
int main()
{
    int a,per;
    scanf("%d",&a);
    float perfect;
    perfect=sqrt((double)a);
    per=perfect;
    if(per==perfect)
    printf("True");
    else
    printf("False");
}