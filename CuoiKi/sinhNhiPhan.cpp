#include <bits/stdc++.h>
using namespace std;
void khoiTao(int *a,int n){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(int *a,int n,bool &ok){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		a[i]=1;
	}
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n+1];
	bool ok=false;
	khoiTao(a,n);
	while(ok==false){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh(a,n,ok);
	}
	return 0;
}
