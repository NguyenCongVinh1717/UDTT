#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n){
	if(n==1||n==2){
		return 1;
	}
	else{
		return fibonaci(n-1)+fibonaci(n-2);
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
	cout<<"So fibonaci thu "<<n<<" la: "<<fibonaci(n)<<endl;
	
	
	
	return 0;
}