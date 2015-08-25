#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	bool kosong=false;
	string kata1,kata2;
	vector<int> vec;
	
	cin>>kata1;
	int i=0;
	while(i<kata1.size()){
		if(kata1[i]=='W'){
			if(kata1[i+1]=='U'){
				if(kata1[i+2]=='B'){
					i+=3;
					if(kata2.size()!=0)kosong=true;
				}else{
					//kata2.append(kata1[i]);
					if(kosong==true){
						kata2+=' ';
						kosong=false;
					}
					kata2+=kata1[i];
					i++;
				}
			}else{
				if(kosong==true){
					kata2+=' ';
					kosong=false;
				}
				kata2+=kata1[i];
				i++;
			}
		}else{
			if(kosong==true){
				kata2+=' ';
				kosong=false;
			}
			kata2+=kata1[i];
			i++;
		}
	}
	cout << kata2;
	return 0;
}
