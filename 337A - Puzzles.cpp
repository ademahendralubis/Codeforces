#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m,f,dif=-1;
	vector<int> vec;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> f;
		vec.push_back(f);
	}
	sort(vec.begin(), vec.end());
	for(int i=0;i<m-n+1;i++){
		if(dif==-1){
			dif=vec[i+n-1]-vec[i];
		}else{
			dif = min(dif, vec[i+n-1]-vec[i]);
		}
	}
	cout <<dif;
	return 0;
}
