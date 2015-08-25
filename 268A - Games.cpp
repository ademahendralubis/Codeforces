#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n,a,b,tot=0;
	vector<int> vec1,vec2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		vec1.push_back(a);
		vec2.push_back(b);
	}
	for(int i=0;i<vec1.size();i++){
		for(int j=0;j<vec2.size();j++){
			if(vec1[i]==vec2[j])tot++;
		}
	}
	cout << tot;
	return 0;
}
