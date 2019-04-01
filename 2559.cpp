#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	x*=3;y*=60;
	if(x+y>=480)cout<<"YES";
	else cout<<"No";
	return 0;
}
