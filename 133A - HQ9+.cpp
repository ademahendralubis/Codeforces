#include <iostream>
#include <string>
using namespace std;

bool periksa(string kal){
	for(int i=0;i<kal.length();i++){
		if(kal[i]=='H' || kal[i]=='Q' || kal[i]=='9'){
			return true;
		}
	}
	return false;
}

int main(){
	string kata;
	
	cin >> kata;
	
	if(periksa(kata)){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
