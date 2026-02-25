#include <bits/stdc++.h>
using namespace std;
int tinhMu(int a,int b){
	if(b==0){
		return 1;
	}
	else{
		int t=tinhMu(a,b/2);
		if(b%2==0){
			return t*t;
		}
		else{
			return t*t*a;
		}
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	int kq=tinhMu(a,b);
	cout<<kq;
	
	return 0;
}
