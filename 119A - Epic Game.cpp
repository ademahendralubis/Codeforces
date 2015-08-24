#include <iostream>
#include <string>
using namespace std;

int gcd(int x,int y){
    int i;
    for(i=x;i>=1;i--){
         if(x%i==0&&y%i==0){
             break;
         }
    }
    return i;
}

int main(){
	int a,b,n;
	bool s=false;
	cin >> a >> b >> n;
	while(n>0){
		if(!s){
			if(a<n){
				n-=gcd(n,a);
			}else{
				n-=gcd(a,n);
			}
			s=true;
		}else{
			if(b<n){
				n-=gcd(n,b);
			}else{
				n-=gcd(b,n);
			}
			s=false;
		}
	}
	if(s){
		cout << 0;
	}else{
		cout << 1;
	}
	return 0;
}
