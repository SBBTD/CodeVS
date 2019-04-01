#include <iostream>
using namespace std;
int main()
{
	int n,a[100],b;
	cin >> n;
	cin >> a[0];
	n--;
	int aLen = 1;
	while(n--) {
		cin >> b;
		int i=0;
		for(i=0; i<aLen; i++)if(b==a[i]||b<a[i]) break;
		if(b<a[i]) {
			for(int j=aLen-1; j>=i; j--)a[j+1] = a[j];
			a[i] = b;
			aLen++;
		} else if(b>a[i]) {
			a[aLen] = b;
			aLen++;
		}
	}
	cout << aLen << endl;
	for(int j=0; j<aLen; j++)cout << a[j] << " ";
}
