#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int jdz(int a,int b)
{
	if(a>b)return a-b;
	else return b-a;
}
int main()
{
	int a,b,c;
	double p,s;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&a+c>b&&jdz(a,b)<c&&jdz(b,c)<a&&jdz(a,c)<b) {
		cout<<"yes";
	} else {
		cout<<"no";
	}
	return 0;
}
