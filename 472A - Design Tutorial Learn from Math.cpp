#include <iostream>
#include <string>
using namespace std;

bool comp(int n,int m){
	bool a=false,b=false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			a=true;
			break;
		}
	}
	for(int i=2;i<m;i++){
		if(m%i==0){
			b=true;
			break;
		}
	}
	
	if(a==true && b==true){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n,a,b;
	cin >> n;
	
	for(int i=4;i<=n;i++){
		a=i;
		b=n-i;
		if(comp(a,b)){
			break;
		}
	}
	cout << a << " " << b;
	return 0;
}
