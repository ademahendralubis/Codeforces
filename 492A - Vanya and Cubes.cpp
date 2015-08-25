#include <iostream>
#include <set>
using namespace std;

int main(){
	int n,total=0,i=1,tingkat=0;
	cin>>n;
	while(n!=0){
		total+=i;
		if(n<total){
			break;
		}else{
			n-=total;
			tingkat++;
		}
		i++;
	}
	cout << tingkat;
	return 0;
}
