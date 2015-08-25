#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
	long int a,b,c,d;
	set<long int> color;
	cin >> a >> b >> c >> d;
	color.insert(a);
	color.insert(b);
	color.insert(c);
	color.insert(d);
	
	cout << 4-color.size();
	return 0;
}
