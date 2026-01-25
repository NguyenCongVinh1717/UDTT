#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void xuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int partition(int *a,int l,int r){
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}
void quickSort(int *a,int l, int r){
	if(l>=r)
		return;
	int p=partition(a,l,r);
	quickSort(a,l,p-1);
	quickSort(a,p+1,r);
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	cout<<"-------------------MANG BAN DAU-----------------------"<<endl;
	xuatMang(a,n);
	cout<<"-------------------SAU KHI QUICK SORT------------------"<<endl;
	quickSort(a,0,n-1);
	xuatMang(a,n);
	return 0;
}
