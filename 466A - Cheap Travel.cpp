#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int l,n,m,a,b,x=0,y=0,z=0,min=0;
	cin>>n>>m>>a>>b;
	l=n;
	x+=l/m*b;
	l-=m*(l/m);
	x+=l*a;
	min=x;
	y=n*a;
	if(y<min){
		min=y;
	}
	if(n%m!=0){
		z=(n/m+1)*b;
	}else{
		z=n/m*b;
	}
	if(z<min){
		min=z;
	}
	cout << min;
	return 0;
}
