#include<cstdio>
using namespace std;
int main()
{
	int a,c,d;
	double b;
	scanf("%d%lf",&a,&b);
	c=a*b;
	if(c%100<50)printf("%d",(c-c%100)/10);
	else printf("%d",(c+(100-c%100))/10);
	return 0;
}
