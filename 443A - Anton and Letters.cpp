#include <iostream>
#include <set>
using namespace std;

int main(){
	set <char> letter;
	char l;
	while(cin>>l){
		if(isalpha(l)){
			letter.insert(l);	
		}
	}
	cout << letter.size();
	return 0;
}
