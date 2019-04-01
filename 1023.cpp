#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	double score1,score2,sum1=0.0,sum2=0.0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>score1>>score2;
		sum1+=score1*score2;
		sum2+=score1;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<sum1/sum2;
	return 0;
}
