#include <bits/stdc++.h>

using namespace std;
void inkq(int n,int *a){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i,int n,int *a){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			inkq(n,a);
		}
		else{
			Try(i+1,n,a);
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n=";
	cin>>n;
	int *a=new int[n];
	Try(1,n,a);
	return 0;
}
