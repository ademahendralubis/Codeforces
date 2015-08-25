#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m,total=0,sisa=0;
	cin >> n >> m;
	while(n>0){
		total+=n;
		n+=sisa;
		sisa = n%m;
		if(n<m){
			break;
		}
		n/=m;
	}
	cout << total;
	return 0;
}
