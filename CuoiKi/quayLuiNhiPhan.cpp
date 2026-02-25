#include <bits/stdc++.h>
using namespace std;
void inkq(int *a,int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int *a,int n,int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			inkq(a,n);
		}
		else{
			Try(a,n,i+1);
		}
	}
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n+1];
	Try(a,n,1);
	
	
	return 0;
}
