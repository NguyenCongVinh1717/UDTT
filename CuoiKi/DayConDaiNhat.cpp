#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n,int *L){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		L[i]=1;
	}
}
void QHD(int *a,int n,int *L){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				L[i]=max(L[i],L[j]+1);
			}
		}
	}
}
void xuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
void xuatKq(int *L,int n){
	int M=L[0];
	for(int i=1;i<n;i++){
		if(L[i]>M){
			M=L[i];
		}	
	}
	cout<<M;
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	int *L=new int[n];
	nhapMang(a,n,L);
	QHD(a,n,L);
	xuatKq(L,n);
	
	return 0;
}
