#include <bits/stdc++.h>

using namespace std;
int tong(int n){
	if(n>=1&&n<10){
		return n;
	}
	else{
		return (n%10)+tong(n/10);
	}
	
}
int main(){
	int n;
	do{
		cout<<"Nhap n=";
		cin>>n;
		if(n<0){
			cout<<"n phai duong, nhap lai!"<<endl;
		}
	}while(n<0);
	cout<<"Tong cac chu so cua "<<n<<" la: "<<tong(n);
	
	return 0;
}