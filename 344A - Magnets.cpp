#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
	int n,total=1;
	bool diff=false;
	cin>>n;
	string kata1, kata2;
	
	for(int i=0;i<n;i++){
		if(i==0){
			cin>>kata2;
		}else{
			cin>>kata1;
			if(kata1.compare(kata2) != 0){
				total++;
				kata2=kata1;
			}
		}
	}
	cout << total;
	return 0;
}
