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
void merge(int *a,int l,int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0, j=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<=y[j]){
			a[l]=x[i];
			l++;
			i++;
		}
		else{
			a[l]=y[j];
			l++;
			j++;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		l++;
		i++;
	}
	while(j<y.size()){
		a[l]=y[j];
		l++;
		j++;
	}		
}
void mergeSort(int *a,int l,int r){
	if(l>=r)
		return;
	int m=(l+r)/2;
	mergeSort(a,l,m);
	mergeSort(a,m+1,r);
	merge(a,l,m,r);
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	cout<<"-------------------MANG BAN DAU-----------------------"<<endl;
	xuatMang(a,n);
	cout<<"-------------------SAU KHI MERGE SORT------------------"<<endl;
	mergeSort(a,0,n-1);
	xuatMang(a,n);
	return 0;
}
