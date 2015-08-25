#include <iostream>
using namespace std;

int main(){
	bool visit=false;
	long int n,t,a,pos=1;
	cin>>n>>t;
	for(int i=1;i<=n-1;i++){
		cin>>a;
		if(pos==i && pos<t){
			pos=a+i;
			if(pos==t){
				visit=true;
				break;
			}else if(pos>t){
				break;
			}
		}
	}
	if(visit){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
