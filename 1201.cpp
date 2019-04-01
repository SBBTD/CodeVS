#include <iostream>
using namespace std;
int main()
{
    int max,min,a,n;
    cin>>n;
    cin>>a;
    max=min=a;
    for(int i=1;i<n;i++){
        cin>>a;
        if(a<min)min=a;
        if(a>max)max=a;
    }
    cout<<min<<" "<<max;
}
