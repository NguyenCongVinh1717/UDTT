#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n){
	if(n==1||n==2){
		return 1;
	}
	int st=1;
	int st2=1;
	int kq;
	for(int i=3;i<=n;i++){
		kq=st+st2;
		st2=st;
		st=kq;
	}
	return kq;
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
	cout<<"So fibonaci thu "<<n<<" la: "<<fibonaci(n)<<endl;
	
	
	
	return 0;
}