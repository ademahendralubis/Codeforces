#include <iostream>
#include <set>
using namespace std;

int main(){
	int n,a,min,max,total=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(i==0){
			max=a;
			min=a;
		}else{
			if(a>max){
				max=a;
				total++;
			}else if(a<min){
				min=a;
				total++;
			}
		}
	}
	cout << total;
	return 0;
}
