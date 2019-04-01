#include<stdio.h>
int main()
{
    double res=0;
    int k,n=0;
    scanf("%d",&k);
    while(res<=k)res+=1/(double)(++n);
    printf("%d",n);
    return 0;
}
