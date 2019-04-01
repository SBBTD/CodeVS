#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a>1000000000)printf("10");
    else if(a>100000000)printf("9");
    else if(a>10000000)printf("8");
    else if(a>1000000)printf("7");
    else if(a>100000)printf("6");
    else if(a>10000)printf("5");
    else if(a>1000)printf("4");
    else if(a>100)printf("3");
    else if(a>10)printf("2");
    else if(a>1)printf("1");
    else printf("0");
}
