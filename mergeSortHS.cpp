#include <bits/stdc++.h>
using namespace std;
struct HocSinh{
	char ten[30];
	char hodem[30];
	int namsinh;
	char diachi[50];
};

void nhap(HocSinh &hs){
	cout<<"Ten: ";
	cin.getline(hs.ten,30);
	cout<<"Ho dem: ";
	cin.getline(hs.hodem,30);
	cout<<"Nam sinh: ";
	cin>>hs.namsinh;
	cin.ignore();
	cout<<"Dia chi: ";
	cin.getline(hs.diachi,50);
}
void xuat(HocSinh hs){
	cout<<hs.hodem<<" "<<hs.ten<<" "<<hs.namsinh<<" "<<hs.diachi<<endl;
}
void nhapMang(HocSinh *a,int n){
	for(int i=0;i<n;i++){
		cout<<"Hoc sinh thu "<<i+1<<":"<<endl;
		nhap(a[i]);
	}
}
void xuatMang(HocSinh *a,int n){
	for(int i=0;i<n;i++){
		xuat(a[i]);
	}
	cout<<endl;
}
void merge(HocSinh *a,int l,int m,int r){
	vector<HocSinh> x(a+l,a+m+1);
	vector<HocSinh> y(a+m+1,a+r+1);
	int i=0, j=0;
	while(i<x.size()&&j<y.size()){
		if(strcmp(x[i].ten,y[j].ten)<0){
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
		l++; i++;
	}
	while(j<y.size()){
		a[l]=y[j];
		l++;j++;
	}
}
void mergeSort(HocSinh *a,int l,int r){
	if(l>=r)
		return;
	int m=(l+r)/2;
	mergeSort(a,l,m);
	mergeSort(a,m+1,r);
	merge(a,l,m,r);
}
int main(){
	int n;
	cout<<"Nhap so hoc sinh: ";
	cin>>n;
	cin.ignore();
	HocSinh *a=new HocSinh[n];
	nhapMang(a,n);
	cout<<"---------------------TRUOC KHI SAP-------------------"<<endl;
	xuatMang(a,n);
	cout<<"---------------------SAU KHI SAP---------------------"<<endl;
	mergeSort(a,0,n-1);
	xuatMang(a,n);
	return 0;
}
