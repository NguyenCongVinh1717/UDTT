#include <bits/stdc++.h>

using namespace std;
void inkq(int k,int *a){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i,int k,int *a,int n){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			inkq(k,a);
		}
		else{
			Try(i+1,k,a,n);
		}
	}
}
int main(){
	int n,k;
	cout<<"Nhap n=";
	cin>>n;
	cout<<"Nhap k=";
	cin>>k;
	int *a=new int[k];
	a[0]=0;
	Try(1,k,a,n);
	return 0;
}
