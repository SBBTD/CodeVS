#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,d,m100,m50,m20,m10,m5,m1;
	bool t=false;
	scanf("%d%d",&a,&b);d=c=a-b;
	m100=(c-c%100)/100;
	c-=m100*100;
	m50=(c-c%50)/50;
	c-=m50*50;
	m20=(c-c%20)/20;
	c-=m20*20;
	m10=(c-c%10)/10;
	c-=m10*10;
	m5=(c-c%5)/5;
	c-=m5*5;
	m1=c;
	printf("%d\n",d);
	if(m100){printf("100*%d",m100);t=true;}
	if(t&&m100)printf("+");
	if(m50){printf("50*%d",m50);t=true;}
	if(t&&m50)printf("+");
	if(m20){printf("20*%d",m20);t=true;}
	if(t&&m20)printf("+");
	if(m10){printf("10*%d",m10);t=true;}
	if(t&&m10)printf("+");
	if(m5){printf("5*%d",m5);t=true;}
	if(t&&m5&&m1)printf("+");
	if(m1){printf("1*%d",m1);t=true;}
	printf("=%d",d);
	return 0;
}
