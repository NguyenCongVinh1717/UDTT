#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void QHD(int *a,int n,int *dp,int tong){
	for(int i=0;i<n;i++){
		for(int j=tong;j>=a[i];j--){
			if(dp[j-a[i]]==1){
				dp[j]=1;
			}
		}
	}
	cout<<dp[tong];
}

int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n+1];
	nhapMang(a,n);
	int tong;
	cout<<"tong=";
	cin>>tong;
	int *dp=new int[tong+1];
	for(int i=1;i<=tong;i++){
		dp[i]=0;
	}
	dp[0]=1;
	QHD(a,n,dp,tong);
	
	return 0;
}
