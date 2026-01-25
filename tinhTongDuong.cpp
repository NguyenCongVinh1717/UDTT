#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
int timSoChanNhoNhat(int *a,int l,int r){
	if(l==r){
		if(a[l]%2==0){
			return a[l];
		}
		else{
			return -1;
		}
	}
	int m=(l+r)/2;
	int minTrai=timSoChanNhoNhat(a,l,m);
	int minPhai=timSoChanNhoNhat(a,m+1,r);
	return min(minTrai,minPhai);
}

int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	cout<<"So chan nho nhat cua mang la: "<<timSoChanNhoNhat(a,0,n-1);
	return 0;
}
