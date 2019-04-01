#include<iostream>
using namespace std;
int f(int z)
{
	int a=0;
	while(z!=1)
		if(z%2==1) {
			z=3*z+1;
			a++;
		} else {
			z=z/2;
			a++;
		}
	return a;
}

int main()
{
	int t;
	cin>>t;
	int n[t+1];
	for(int i=0; i<t; i++)cin>>n[i];
	for(int i=0; i<t; i++)cout<<f(n[i])<<endl;
	return 0;
}
