#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int S;
	cout<<"So vat n=";
	cin>>n;
	cout<<"Suc chua tui=";
	cin>>S;
	int w[n+1],v[n+1];
	for(int i=1;i<=n;i++){
		cout<<"w["<<i<<"]=";
		cin>>w[i];
		cout<<"v["<<i<<"]=";
		cin>>v[i];
	}
	int dp[n+1][S+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=S;j++){
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=S;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[n][S];
	
	return 0;
}