#include <bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return ucln(b,a%b);
	}
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