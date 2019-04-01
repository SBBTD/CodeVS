#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char num[100],num2[100];
	int n;
	cin>>num;
	cin>>n;
	int k=strlen(num);
	if(n==0) {
		cout<<num;
		return 0;
	} else if((n<0?-n:n)>k) {
		cout<<"Error";
		return 0;
	} else if(n<0) {
		int ntmp=-n;
		for(int i=0; i<ntmp; i++) {
			num2[i]=num[k-ntmp+i];
		}
		num2[n]='\0';
	} else {
		for(int i=0; i<n; i++) {
			num2[i]=num[i];
		}
		num2[n]='\0';
	}
	bool zero=true;
	for(int i=0; i<(n<0?-n:n); i++) {
		if(i==(n<0?-n:n)-1&&num2[i]=='0')cout<<0;
		else if(!zero)cout<<num2[i];
		else if(num2[i]!='0') {
			zero=false;
			cout<<num2[i];
		}
	}
	return 0;
}
