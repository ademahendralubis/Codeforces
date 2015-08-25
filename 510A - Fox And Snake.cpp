#include <iostream>
#include <set>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			if(i%2!=0){
			cout << '#';
			}else{
				if(j==m-1 && (i/2)%2!=0){
					cout << '#';
				}else if(j==0 && (i/2)%2==0){
					cout << '#';
				}else{
					cout << '.';
				}
			}	
		}
		cout << endl;
	}
	return 0;
}
