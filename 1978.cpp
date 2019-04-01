#include<iostream>
using namespace std;
int f(int b)
{
	if(b==1||b==2)return 1;
	else return f(b-1)+f(b-2);
}
int main()
{
	int a;
	cin>>a;
	cout<<f(a);
	return 0;
}
