#include<iostream>
using namespace std;

int main()
{
	int ys[13],ck=0,sy=0;
	for(int i=1; i<=12; i++)cin>>ys[i];
	for(int i=1; i<=12; i++) {
		sy+=300;
		if(sy-ys[i]>=0) {
			ck+=(sy-ys[i])-(sy-ys[i])%100;
			sy-=(sy-ys[i])-(sy-ys[i])%100+ys[i];
		} else {
			cout<<-i;
			return 0;
		}
	}
	cout<<1.2*ck+sy;
	return 0;
}
