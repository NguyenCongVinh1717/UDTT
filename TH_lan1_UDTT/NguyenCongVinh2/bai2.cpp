#include <bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int a,b;
	cout<<"Nhap a=";
	cin>>a;
	cout<<"Nhap b=";
	cin>>b;
	cout<<"UCLN cua "<<a<<" va "<<b<<" la: "<<ucln(a,b)<<endl;
	
	
	
	return 0;
}