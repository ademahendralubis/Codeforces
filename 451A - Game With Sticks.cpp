#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m;
	cin>>n >>m;
	bool a=false,b=false;
	
	while(n>0 && m>0){
		if(a==false && b==false){
			n-=1;
			m-=1;
			a=true;
		}else if(b==false && a==true){
			n-=1;
			m-=1;
			b=true;
			a=false;
		}else if(a==false && b==true){
			n-=1;
			m-=1;
			a=true;
			b=false;
		}
	}
	if(a){
		cout << "Akshat";
	}else{
		cout << "Malvika";
	}
	return 0;
}
