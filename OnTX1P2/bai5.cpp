#include <bits/stdc++.h>
using namespace std;
struct CongViec{
	char maCV[30];
	float thoiGianBD;
	float thoiGianTH;
};
void nhap(CongViec &cv){
	cout<<"Ma cong viec: ";
	cin.getline(cv.maCV,30);
	cout<<"Thoi gian bat dau: ";
	cin>>cv.thoiGianBD;
	cout<<"Thoi gian thuc hien: ";
	cin>>cv.thoiGianTH;
	cin.ignore();
}
void xuat(CongViec cv){
	cout<<cv.maCV<<","<<cv.thoiGianBD<<","<<cv.thoiGianTH<<endl;
}
void khoiTao(int *a,int k){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(int *a,int n,int k,bool &ok){
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
void inNguocDeQuy(CongViec *cv,int n){
	if(n==0){
		return;
	}
	xuat(cv[n-1]);
	inNguocDeQuy(cv,n-1);
}
void nhapMang(CongViec *cv){
	for(int i=0;i<6;i++){
		cout<<"Nhap cong viec thu "<<i+1<<":"<<endl;
		nhap(cv[i]);
	}
}
int main(){
	CongViec *cv=new CongViec[6];
	nhapMang(cv);
	cout<<"--------------------IN NGUOC--------------------"<<endl;
	int n=6;
	inNguocDeQuy(cv,n);
	int k=5;
	bool ok=false;
	int *a=new int[k+1];
	khoiTao(a,k);
	cout<<"------------------SINH TO HOP-------------------"<<endl;
	while(ok==false){
		for(int i=1;i<=k;i++){
			cout<<cv[a[i]-1].maCV<<",";
		}
		cout<<endl;
		sinh(a,n,k,ok);
	}
	return 0;
}
