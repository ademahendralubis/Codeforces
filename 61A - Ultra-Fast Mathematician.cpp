#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string kata1,kata2;
	vector<int> vec;
	
	
	cin >>kata1 >>  kata2;
	
	for(int i=0;i<kata1.size();i++){
		if(kata1[i]!=kata2[i]){
			vec.push_back(1);
		}else{
			vec.push_back(0);
		}
	}
	for(int i=0;i<vec.size();i++){
		cout << vec[i];
	}
	return 0;
}
