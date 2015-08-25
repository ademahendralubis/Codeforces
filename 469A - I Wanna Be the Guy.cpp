#include <iostream>
#include <set>
using namespace std;

int main(){
	int n,a,b,c;
	set<int> s;
	cin>>n;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>c;
		s.insert(c);
	}
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>c;
		s.insert(c);
	}
	
	if(s.size()!=n){
		cout << "Oh, my keyboard!";
	}else{
		cout << "I become the guy.";
	}
	return 0;
}
