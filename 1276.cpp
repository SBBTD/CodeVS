#include<cstdio>
using namespace std;
int main()
{
	int k;
	scanf("%d",&k);
	for(int i=1; i<=3*k; i++) {
		if(i>=1&&i<=k) {
			for(int j=1; j<=k; j++)printf("*");
			for(int j=1; j<=k; j++)printf("x");
			for(int j=1; j<=k; j++)printf("*");
			printf("\n");
		}
		if(i<=2*k&&i>k) {
			for(int j=1; j<=k; j++)printf(" ");
			for(int j=1; j<=k; j++)printf("x");
			for(int j=1; j<=k; j++)printf("x");
			printf("\n");
		}
		if(i<=3*k&&i>2*k) {
			for(int j=1; j<=k; j++)printf("*");
			for(int j=1; j<=k; j++)printf(" ");
			for(int j=1; j<=k; j++)printf("*");
			printf("\n");
		}
	}
	return 0;
}
