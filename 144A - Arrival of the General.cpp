#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,a,max=0,min=101,x,y;
	
	cin >>n;
	
	for(int i=1;i<=n;i++){
		cin >>a;
		if(a>max){
			max=a;
			y=i;
		}
		
		if(a<=min){
			min=a;
			x=i;
		}
		
	}
		if(x<y){
			cout << abs(x+1-n) + abs(y-1);
		}else if(x==y){
			cout << 0;
		}else{
			cout << abs(x-n) + abs(y-1);
		}
	return 0;
}
