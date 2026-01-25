#include <bits/stdc++.h>
using namespace std;

void khoiTao(int n,char *a){
	for(int i=1;i<=n;i++){
		a[i]='a';
	}
}

void sinh(int n,char *a,bool &ok){
	int i=n;
	while(i>=1&&a[i]=='b'){
		a[i]='a';
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		a[i]='b';
	}
}

int main(){
	int n;
	cout<<"Nhap n=";
	cin>>n;
	char *a=new char[n+1];
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