#include <iostream>
using namespace std;

int main(){
	int n,arr[105],a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		arr[a-1]=i;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
