#include <bits/stdc++.h>
using namespace std;
int tinhMu(int a,int b){
	if(b==0)
		return 1;
	else{
		int t=tinhMu(a,b/2);
		if(b%2==0){
			return t*t;
		}
		else if(b%2!=0){
			return t*t*a;
		}
	}
}

int main(){
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<a<<" mu "<<b<<" : "<<tinhMu(a,b);
	return 0;
}
