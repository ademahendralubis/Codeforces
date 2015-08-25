#include <iostream>
#include <string>
using namespace std;

bool periksa(string a, string b){
	int i=0,n=0,m=b.length()-1;
	
	while(i<a.length()){
		if(a[n]!=b[m]){
			return false;
		}
		n++;
		m--;
		i++;
	}
	return true;
}

int main(){
	string kata1,kata2;
	cin >> kata1 >> kata2;
	
	if(kata1.length()!=kata2.length()){
		cout << "NO";
	}else{
		if(periksa(kata1,kata2)){
			cout << "YES";	
		}else{
			cout << "NO";
		}
	}
	return 0;
}
