#include<stdio.h>
int main()
{
	int min,max,n=0;
	bool zs=false;
	scanf("%d%d",&min,&max);
	for(int i=min+1; i<max; i++) {
		if(i!=1&&i!=2)
			for(int j=2; j<=i/2+1; j++) {
				if(i%j==0) {
					zs=false;
					break;
				} else zs=true;
			}
		else if(i==2)zs=true;
		else zs=false;
		if(zs==true)n++;
	}
	printf("%d",n);
	return 0;
}
