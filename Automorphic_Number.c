#include<stdio.h>
bool Auto(int N)
{
    int sq=N*N;
    while(N>0)
    {
        if(N%10!=sq%10)
        return false;
        N=N/10;
        sq=sq/10;
    }
    return true;
}
int main()
{
    int N;
    scanf("%d",&N);
    Auto(N) ? printf("Automorphic Number") : printf("Not an Automorphic Number");
}