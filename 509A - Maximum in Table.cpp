#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int arr[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(i==0 || j==0){
				arr[i][j]=1;
			}else{
				arr[i][j]=arr[i][j-1]+arr[i-1][j];
			}
		}
	}
	cin>>n;
	
	cout << arr[n-1][n-1];
	return 0;
}
