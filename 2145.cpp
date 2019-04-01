#include<iostream>
#include<cstring>
using namespace std;
char a[32000000];
int main()
{
    cin>>a;
    int c=strlen(a)-1;
    a[c]-='0';
    if(a[c]&1)cout<<"ji";
    else cout<<"ou";
    return 0;
}
