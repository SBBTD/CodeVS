#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	double x1,y1,x2,y2;
	double a,b;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2&&y1==y2)
		cout<<"nonono~";
	else
	{
		a=(y2-y1)/(x2-x1);
		b=y1-x1*a;
		printf("%.2f %.2f",a,b);
	}
	return 0;
}
