#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string vec[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int n,t=1;
	cin>>n;
	while(n>t*5){
		n-=t*5;
		t*=2;
	}
	if(n%t==0){
		cout << vec[n/t-1];
	}else{
		cout << vec[n/t];
	}
	return 0;
}
