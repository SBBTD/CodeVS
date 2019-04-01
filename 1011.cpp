#include<iostream>
using namespace std;
int k=1;

void JS(int m)
{
	m=m/2;
	for(int i=1; i<=m; i++) {
		k++;
		JS(i);
	}
}

int main()
{
	int n;
	cin>>n;
	JS(n);
	cout<<k<<endl;
	return 0;
}
