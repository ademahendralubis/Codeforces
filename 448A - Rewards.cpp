#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int a,b,a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	a=a1+a2+a3;
	b=b1+b2+b3;
	if(a%5==0){
		a = a/5;
	}else{
		a= a/5+1;
	}
	if(b%10==0){
		b = b/10;
	}else{
		b= b/10+1;
	}
	if(n-a-b>=0){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
