#include <bits/stdc++.h>
using namespace std;
struct DienThoai{
	char nhanHieu[30];
	int kichThuoc;
	float giaBan;
};
void nhap(DienThoai &dt){
	cout<<"Nhan hieu: ";
	cin>>dt.nhanHieu;
	cout<<"Kich thuoc: ";
	cin>>dt.kichThuoc;
	cout<<"Gia ban: ";
	cin>>dt.giaBan;
	cin.ignore();
}
void xuat(DienThoai dt){
	cout<<dt.nhanHieu<<"|"<<dt.kichThuoc<<"|"<<dt.giaBan<<endl;
}
void nhapMang(DienThoai *dt,int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap dien thoai thu "<<i+1<<":"<<endl;
		nhap(dt[i]);
	}
}
void xuatMang(DienThoai *dt,int n){
	for(int i=0;i<n;i++){
		xuat(dt[i]);
	}
}
void quyHoachDong(DienThoai *dt,int n, int kichThuoc){
	float dp[n][kichThuoc];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=kichThuoc;j++){
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=kichThuoc;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=dt[i-1].kichThuoc){
				dp[i][j]=max(dp[i][j],dp[i-1][j-dt[i-1].kichThuoc]+dt[i-1].giaBan);
			}
		}
	}
	cout<<"Gia ban max la: "<<dp[n][kichThuoc]<<endl;
}
int main(){
	int n;
	cout<<"Nhap so dien thoai n=";
	cin>>n;
	cin.ignore();
	DienThoai *dt=new DienThoai[n];
	nhapMang(dt,n);
	cout<<"----------------MANG BAN DAU-------------"<<endl;
	xuatMang(dt,n);
	cout<<"----------------QUY HOACH DONG------------"<<endl;
	cout<<"Nhap kich thuoc: ";
	int kt;
	cin>>kt;
	quyHoachDong(dt,n,kt);

	return 0;
}