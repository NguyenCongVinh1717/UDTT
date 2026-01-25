#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
int timMax(int *a,int l,int r){
	if(l==r){
		return a[l];
	}
	int m=(l+r)/2;
	int maxTrai=timMax(a,l,m);
	int maxPhai=timMax(a,m+1,r);
	return max(maxTrai,maxPhai);
}

int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	cout<<"Max cua mang la: "<<timMax(a,0,n-1);
	return 0;
}
