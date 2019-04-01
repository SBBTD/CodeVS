#include<stdio.h>
#include<string.h>
#define MAXN 10+100
char a[MAXN],b[MAXN];
int main()
{
	int i,j=0,k=0,kg1=0,kg2=0,kaishi=0,biaoji=0;
	scanf("%s%s",a,b);
	for (i=0; i<strlen(a); i++){
		if (a[i]!=b[j]) j=0;
		if (a[i]==b[j]) j++;
		else j=0;
		if (j>=(strlen(b))){
			printf("%d",i-j+2);
			break;
		}
	}
	return 0;
}
