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
	int i=0,j=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<y[j]){
			a[l]=x[i];
			l++;i++;
		}
		else{
			a[l]=y[j];
			l++;j++;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		l++;i++;
	}
	while(j<y.size()){
		a[l]=y[j];
		l++;j++;
	}
}
void mergeSort(int *a,int l,int r){
	if(l>=r){
		return;
	}
	int m=(l+r)/2;
	mergeSort(a,l,m);
	mergeSort(a,m+1,r);
	merge(a,l,m,r);
}
int partition(int *a,int l,int r){
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}
void quickSort(int *a,int l,int r){
	if(l>=r){
		return;
	}
	int p=partition(a,l,r);
	quickSort(a,l,p-1);
	quickSort(a,p+1,r);
}
bool binarySearch(int *a,int l,int r,int soCanTim){
	if(l>r){
		return false;
	}
	int m=(l+r)/2;
	if(a[m]==soCanTim){
		return true;
	}
	else if(a[m]>soCanTim){
		return binarySearch(a,l,m-1,soCanTim);
	}
	else{
		return binarySearch(a,m+1,r,soCanTim);
	}
}
int main(){
		int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	cout<<"-------------------MANG BAN DAU-----------------------"<<endl;
	xuatMang(a,n);
	cout<<"-------------------SAU KHI SORT------------------"<<endl;
	quickSort(a,0,n-1);
	xuatMang(a,n);
	cout<<"-------------------TIM KIEM------------------------"<<endl;
	int so;
	cout<<"So Can tim: ";
	cin>>so;
	if(binarySearch(a,0,n-1,so)){
		cout<<"Tim thay"<<endl;
	}
	else{
		cout<<"K tim thay"<<endl;
	}
	return 0;
}
