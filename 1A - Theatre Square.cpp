#include <iostream>
using namespace std;

int main(){
	long long int a,b,i,j,k,jumlah=1;
	cin >> i;
	cin >> j;
	cin >> k;
	if(j%k==0){
		jumlah *=(j/k);
	}else{
		jumlah *=((j/k)+1);
	}
	if(i%k==0){
		jumlah *=(i/k);
	}else{
		jumlah *=((i/k)+1);
	}
	cout << jumlah;
	
	return 0;
}
