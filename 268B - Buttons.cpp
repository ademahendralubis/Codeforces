#include <iostream>
#include <set>
using namespace std;

int main(){
	long long int n,total=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i!=n){
			total+=(n-i)*i;	
		}else{
			total+=n;
		}
	}
	cout << total;
	return 0;
}
