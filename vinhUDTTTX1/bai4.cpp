#include <bits/stdc++.h>

using namespace std;
struct ChuyenBay{
	char soHieu[30];
	float giaVe;
	int soGheNgoi;
};
void nhap(ChuyenBay &cb){
	cout<<"So hieu: ";
	cin.getline(cb.soHieu,30);
	cout<<"Gia ve: ";
	cin>>cb.giaVe;
	cout<<"So ghe: ";
	cin>>cb.soGheNgoi;
	cin.ignore();
}
void xuat(ChuyenBay cb){
	cout<<cb.soHieu<<"|"<<cb.giaVe<<"|"<<cb.soGheNgoi<<endl;
}

void nhapMang(ChuyenBay cb[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap chuyen bay thu "<<i+1<<":"<<endl;
		nhap(cb[i]);
	}
}
void xuatMang(ChuyenBay cb[],int n){
		for(int i=0;i<n;i++){
			xuat(cb[i]);
	}
}
ChuyenBay timGiaMin(ChuyenBay cb[],int l,int r){
	if(l==r){
		return cb[l];
	}
	int m=(l+r)/2;
	ChuyenBay minTrai=timGiaMin(cb,l,m);
	ChuyenBay minPhai=timGiaMin(cb,m+1,r);
	if(minTrai.giaVe>minPhai.giaVe){
		return minPhai;
	}
	return minTrai;
}
//void inKq(int *a,ChuyenBay *cb,int n,int k){
//		for(int i=1;i<=k;i++){
//			cout<<cb[a[i]-1].soHieu<<"|";
//		}
//		cout<<endl;
//}
//void Try(int i,int *a,ChuyenBay *cb,int n,int k){
//	for(int j=a[i-1]+1;j<=n-k+i;j++){
//			a[i]=j;
//			if(i==k){
//				inKq(a,cb,n,k);
//			}
//			else{
//				Try(i+1,a,cb,n,k);
//			}
//		}
//}
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
int main(){
	int n;
	cout<<"Nhap so chuyen bay: ";
	cin>>n;
	cin.ignore();
	ChuyenBay *cb=new ChuyenBay[n];
	nhapMang(cb,n);
	cout<<"------------------------GIA VE MIN------------------"<<endl;
	xuat(timGiaMin(cb,0,n-1));
	cout<<"------------------------CHON k TU n CHUYEN BAY------------------"<<endl;
	int k=3;
	cout<<"k=";
	cin>>k;
	int *a=new int[k+1];
	a[0]=0;
//	Try(1,a,cb,n,k);
	bool ok=false;
	khoiTao(a,k);
	while(ok==false){
		for(int i=1;i<=k;i++){
			cout<<cb[a[i]-1].soHieu<<"|";
		}
		cout<<endl;
		sinh(a,n,k,ok);
	}
	return 0;
}