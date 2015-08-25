#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,tot=0;
	cin>>a>>b>>c;
	
	tot=a+b+c;
	tot=max(tot,a+b*c);
	tot=max(tot,a*b+c);
	tot=max(tot,a*b*c);
	tot=max(tot,(a+b)*c);
	tot=max(tot,a*(b+c));
	cout <<tot;
	return 0;
}
