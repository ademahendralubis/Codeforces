#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m,o;
	string kata;
	bool lucky=true;
	cin>>n;
	m=n;
	/*for(int i=0;i<kata.length();i++){
		if(kata[i]!='4' && kata[i]!='7'){
			lucky=false;
			break;
		}
	}*/
	do{
		o=m%10;
		if(o!=4 && o!=7){
			lucky=false;
			break;
		}
		if(m<10){
			break;
		}
		m/=10;
	}while(m>0);
	if(!lucky){
		if(n%4==0 || n%7==0 || n%47==0){
			lucky=true;
		}
	}
	if(lucky){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	
}
