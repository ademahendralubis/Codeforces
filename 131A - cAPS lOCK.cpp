#include <iostream>
#include <string>
using namespace std;

bool periksa(string kal){
	for(int i=1;i<kal.length();i++){
		if((kal[i]>='a')&&(kal[i]<='z')){
			return false;
		}
	}
	return true;
}

int main(){
		int a;
		string kata;
		
		cin >> kata;
		a=kata.length();
		
		if(periksa(kata)){
			if((kata[0]>='A')&&(kata[0]<='Z')){
				kata[0]=kata[0]-'A'+'a';
	 			cout << kata[0];
			}else{
				kata[0]=kata[0]-'a'+'A';
	 			cout << kata[0];
			}
			for(int j=1;j<kata.length();j++){
				kata[j]=kata[j]-'A'+'a';
	 			cout << kata[j];
			}
		}else{
			cout << kata;
		}
}
