#include <iostream>
using namespace std;

int main()
{
	double a1,b1,c1,a2,b2,c2,x,y;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	y=(c2-a2*c1/a1)/(b2-(a2*b1/a1));
	x=(c1-b1*y)/a1;
	cout<<"x="<<x<<"\ny="<<y;
	return 0;
}
