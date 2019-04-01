#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the speed limit: ";
    cin>>a;
    cout<<"Enter the recorded speed of the car: ";
    cin>>b;
    c=b-a;
    if(c<=0)cout<<"Congratulations, you are within the speed limit"<<endl;
    else if(c>=1&&c<=20)cout<<"You are speeding and your fine is $ 100"<<endl;
    else if(c>=21&&c<=30)cout<<"You are speeding and your fine is $ 270"<<endl;
    else if(c>=31)cout<<"You are speeding and your fine is $ 500"<<endl;
    return 0;
}
