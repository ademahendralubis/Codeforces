#include <iostream>
#include <set>
using namespace std;

int main(){
	int s1=0,s2=0;
	char a;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>a;
			if(a=='Q'){
				s1+=9;
			}
			if(a=='R'){
				s1+=5;
			}
			if(a=='B'){
				s1+=3;
			}
			if(a=='N'){
				s1+=3;
			}
			if(a=='P'){
				s1+=1;
			}
			if(a=='q'){
				s2+=9;
			}
			if(a=='r'){
				s2+=5;
			}
			if(a=='b'){
				s2+=3;
			}
			if(a=='n'){
				s2+=3;
			}
			if(a=='p'){
				s2+=1;
			}
		}
	}
	if(s1>s2){
		cout << "White";
	}else if(s1<s2){
		cout << "Black";
	}else{
		cout << "Draw";
	}
}
