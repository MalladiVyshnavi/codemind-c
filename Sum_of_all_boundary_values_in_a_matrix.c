#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}