#include <iostream>
#include <vector>
using namespace std;

int main(){
	string up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string lw = "abcdefghijklmnopqrstuvwxyz";
	int n,total=0;
	string kata;
	cin>>n;
	cin>>kata;
	for(int i=0;i<26;i++){
		for(int j=0;j<n;j++){
			if(kata[j]==up[i] || kata[j]==lw[i]){
				total++;
				break;
			}
		}
	}
	if(total==26){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
