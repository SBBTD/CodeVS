#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	double a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=a/(b+c);
	f=e*d;
	printf("%.0f\n",f);
    return 0;
}
