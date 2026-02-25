#include <bits/stdc++.h>
using namespace std;
void khoiTao(int *a,int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(int *a,int n,bool &ok){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		for(int j=n;j>i;j--){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
				break;
			}
		}
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int n,k,d;
	d=0;
	cout<<"n=";
	cin>>n;
	int *a=new int[n+1];
	bool ok=false;
	khoiTao(a,n);
	while(ok==false){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		d++;
		cout<<endl;
		sinh(a,n,ok);
	}
	cout<<d;
	return 0;
}
