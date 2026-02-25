#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
int tinhTongDuong(int *a,int l,int r){
	if(l==r){
		if(a[l]>0){
			return a[l];
		}
		else{
			return 0;
		}
	}
	else{
		int m=(l+r)/2;
		int tongTrai=tinhTongDuong(a,l,m);
		int tongPhai=tinhTongDuong(a,m+1,r);
		return tongTrai+tongPhai;
	}
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	int kq=tinhTongDuong(a,0,n-1);
	if(kq==0){
		cout<<"K co so duong"<<endl;
	}
	else{
		cout<<"Tong duong="<<kq<<endl;
	}
	
	return 0;
}
