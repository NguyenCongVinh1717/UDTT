#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	int *dp=new int[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		dp[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	int kq=0;
	for(int i=0;i<n;i++){
		kq=max(kq,dp[i]);
	}
	cout<<kq<<endl;
	return 0;
}
