#include <iostream>
#include <string>
using namespace std;

int main(){
	int isi[4];
	for(int i=0;i<4;i++){
		isi[i]=0;
	}
	
	int n,s,total=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		isi[s-1]++;
	}
	total = total + isi[3];
	total = total + isi[2];
	if(isi[2]>0){
		if(isi[0]>isi[2])isi[0]-=isi[2];
		else isi[0]=0;	
	}
	if(isi[1]>0){
		if(isi[1]%2==0){
			total = total + isi[1]/2;
		}else{
			total = total + (isi[1]/2+1);
			isi[1] = isi[1]%2;
			if(isi[0]>isi[1]*2){
				isi[0] = isi[0]-isi[1]*2;
			}else{
				isi[0]=0;
			}
		}
	}
	
	if(isi[0]>0 && isi[0]%4!=0) total = total + (isi[0]/4)+1;
	else if(isi[0]>0 && isi[0]%4==0)total = total + (isi[0]/4);
	cout << total;
}
