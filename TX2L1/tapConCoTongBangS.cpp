#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	int S;
	cout<<"Tong S=";
	cin>>S;
	int *dp=new int[S+1];
	for(int i=1;i<=S+1;i++){
		dp[i]=0;
	}
	dp[0]=1;
	for(int i=0;i<=n;i++){
		for(int j=S;j>=a[i];j--){
			if(dp[j-a[i]]==1){
				dp[j]=1;
			}
		}
	}
	if(dp[S]==1)
		cout<<1;
	else{
		cout<<0;
	}
	return 0;
}
