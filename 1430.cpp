#include<cstdio>
using namespace std;
int main()
{
	int a;
	bool sb;
	scanf("%d",&a);
	if(a!=1&&a!=0)
		for(int i=2; i<=a/2+1; i++)
			if(a%i==0) {
				sb=true;
				break;
			} else sb=false;
	else printf("\\n");
	if(sb)printf("\\n");
	else printf("\\t");
	return 0;
}
