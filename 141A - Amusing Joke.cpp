#include <iostream>
#include <set>
using namespace std;

int main(){
	int a,b,c,pos=0,total=0;
	string kata1,kata2,kata3;
	cin>>kata1>>kata2>>kata3;
	a= kata1.size()+kata2.size();
	b= kata3.size();
	
	if(a<b || a>b){
		cout << "NO";
	}else{
		for(int i=0;i<kata1.size();i++){
			for(int j=0;j<kata3.size();j++){
				if(kata1[i]==kata3[j]){
					pos=j+1;
					kata3[j]='0';
					total++;
					break;
				}
			}
		}
		for(int i=0;i<kata2.size();i++){
			for(int j=0;j<kata3.size();j++){
				if(kata2[i]==kata3[j]){
					kata3[j]='0';
					total++;
					break;
				}
			}
		}
		
		if(total==kata3.size()){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}
	return 0;
}
