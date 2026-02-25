#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *w,int *v,int n){
	for(int i=1;i<=n;i++){
		cout<<"w["<<i<<"]=";
		cin>>w[i];
		cout<<"v["<<i<<"]=";
		cin>>v[i];
	}
}
void QHD(int *w,int *v,int n,int tui,int** dp){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=tui;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]){
				dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[n][tui];
}

int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int tui;
	cout<<"tui=";
	cin>>tui;
	int *w=new int[n+1];
	int *v=new int[n+1];
	nhapMang(w,v,n);
	int **dp=new int*[n+1];
	for(int i=0;i<=n;i++){
		dp[i]=new int[tui+1];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=tui;j++){
			dp[i][j]=0;
		}
	}
	QHD(w,v,n,tui,dp);
	
	
	return 0;
}
