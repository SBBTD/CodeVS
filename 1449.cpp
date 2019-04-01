#include<cstdio>
using namespace std;
int main()
{
	int a,b=1;
	scanf("%d",&a);
	for(int i=2; i<=a; i++)b*=i;
	printf("%d",b);
	return 0;
}
