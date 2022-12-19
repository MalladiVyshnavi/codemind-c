#include<stdio.h>
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int dif(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int pro(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int div(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
int mod(int a,int b)
{
    int c;
    c=a%b;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Sum:%d
",sum(a,b));
    printf("Difference:%d
",dif(a,b));
    printf("Product:%d
",pro(a,b));
    printf("Quotient:%d
",div(a,b));
    printf("Remainder:%d
",mod(a,b));
}