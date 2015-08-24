#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
	bool dis=false;
	set<int> year;
	int tahun,temp,a;
	cin>> tahun;
	
	while(!dis){
	tahun+=1;
	temp=tahun;
		while(temp>0){
			a=temp%10;
			if(temp<10){
				temp=0;
			}else{
				temp/=10;
			}
			set<int>::iterator it = year.find(a);
			if(it != year.end()){
				year.clear();
				dis=false;
				break;
			}else{
				year.insert(a);
				dis=true;
			}
		}
	}
	cout << tahun;
	return 0;
}
