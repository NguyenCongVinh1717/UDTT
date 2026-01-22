#include <bits/stdc++.h>
using namespace std;

//void khoiTao(int k,int *a){
//	for(int i=1;i<=k;i++){
//		a[i]=i;
//	}
//}
//
//void sinh(int k,int *a,bool &ok,int n){
//	int i=k;
//	while(i>=1&&a[i]==n-k+i){
//		i--;
//	}
//	if(i==0){
//		ok=true;
//	}
//	else{
//		a[i]++;
//		for(int j=i+1;j<=k;j++){
//			a[j]=a[j-1]+1;
//		}
//	}
//}


void khoiTao(int k,int *a){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(int k,int *a,bool &ok,int n){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int n,k;
	cout<<"Nhap n=";
	cin>>n;
	cout<<"Nhap k=";
	cin>>k;
	int *a=new int[n];
	bool ok=false;
	khoiTao(k,a);
	while(ok==false){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh(k,a,ok,n);
	}
	return 0;
}
