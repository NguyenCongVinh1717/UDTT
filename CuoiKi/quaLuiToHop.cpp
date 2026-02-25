#include <bits/stdc++.h>
using namespace std;
void inkq(int *a,int k){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int *a,int n,int k,int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			inkq(a,k);
		}
		else{
			Try(a,n,k,i+1);
		}
	}
}
int main(){
	int n,k;
	cout<<"n=";
	cin>>n;
	cout<<"k=";
	cin>>k;
	int *a=new int[k+1];
	a[0]=0;
	Try(a,n,k,1);
	
	
	return 0;
}
