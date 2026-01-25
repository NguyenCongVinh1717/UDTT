#include <bits/stdc++.h>
using namespace std;

void khoiTao(int n,int *a){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}

void sinh(int n,int *a,bool &ok){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		for(int j=n;j>=i+1;j--){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
				break;
		}
	}
			reverse(a+i+1,a+n+1);
	}
}

int main(){
	int n,k;
	cout<<"Nhap n=";
	cin>>n;
	int *a=new int[n+1];
	bool ok=false;
	khoiTao(n,a);
	while(ok==false){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh(n,a,ok);
	}
	return 0;
}