#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,a,b,total=0;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(b-a>=2){
			total++;
		}
	}
	cout << total;
}
