#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
	long long int n,c,d,e,f,total=0;
	string a,b;
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		if(a[i]=='0'){
			c=0;
		}else if(a[i]=='1'){
			c=1;
		}else if(a[i]=='2'){
			c=2;
		}else if(a[i]=='3'){
			c=3;
		}else if(a[i]=='4'){
			c=4;
		}else if(a[i]=='5'){
			c=5;
		}else if(a[i]=='6'){
			c=6;
		}else if(a[i]=='7'){
			c=7;
		}else if(a[i]=='8'){
			c=8;
		}else if(a[i]=='9'){
			c=9;
		}
		if(b[i]=='0'){
			d=0;
		}else if(b[i]=='1'){
			d=1;
		}else if(b[i]=='2'){
			d=2;
		}else if(b[i]=='3'){
			d=3;
		}else if(b[i]=='4'){
			d=4;
		}else if(b[i]=='5'){
			d=5;
		}else if(b[i]=='6'){
			d=6;
		}else if(b[i]=='7'){
			d=7;
		}else if(b[i]=='8'){
			d=8;
		}else if(b[i]=='9'){
			d=9;
		}
		e=abs(c-d);
		if(c<d){
			f=abs((c+10)-d);
		}else{
			f=abs((d+10)-c);
		}
		total+=min(e,f);
	}
	cout << total;
	return 0;
}
