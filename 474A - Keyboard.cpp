#include <iostream>
#include <set>
using namespace std;

int main(){
	char dir;
	string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string kata;
	cin>>dir;
	cin>>kata;
	
	for(int i=0;i<kata.size();i++){
		for(int j=0;j<key.size();j++){
			if(kata[i]==key[j]){
				if(dir=='L'){
					cout << key[j+1];
				}else{
					cout << key[j-1];
				}
			}
		}
	}
	return 0;
}
