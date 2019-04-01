#include<cstdio>
using namespace std;
int main()
{
	double a,b;long long c,d;
	scanf("%lf%lf",&a,&b);
	a*=10e8;b*=10e8;c=a,d=b;
	if(c==d)printf("yes");
	else printf("no");
}
