#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m,total=0,days=0,sisa=0;
	cin>>n >>m;
	
	total+=n;
	days+=n;
	
	while(n>=m){
		sisa=n%m;
		n=n/m;
		total+=n;
		n+=sisa;
		if(n<=1){
			break;
		}
	}
	
	cout << total;
	return 0;
}
