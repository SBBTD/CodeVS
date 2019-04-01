#include<iostream>
using namespace std;
int main()
{
	int N,g=1,i=1,s=0;
	cin>>N;
	int k=N;
	while(k>i) {
		k-=i;
		i++;
	}
	for(int j=1; j<=i; j++)
		s+=j;
	s=s-(i-1);
	g=g-s;
	if(i%2!=0)
		cout<<i-k+1<<"/"<<k;
	else
		cout<<k<<"/"<<i-k+1;
	return 0;
}
