#include<iostream>
using namespace std;
int f(int b)
{
	if(b>=0)return 5;
	else return f(b+1)+f(b+2)+1;
}
int main()
{
	int a,c;
	cin>>a;
	c=f(a);
	cout<<c;
	return 0;
}
