#include <bits/stdc++.h>

using namespace std;

void inkq(int n,int *a){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i,int n,int *a,int *used){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				inkq(n,a);
			}
			else{
				Try(i+1,n,a,used);
			}
			used[j]=0;
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n=";
	cin>>n;
	int *a=new int[n];
	int *used=new int[n];
	for(int i=0;i<n;i++){
		used[i]=0;
	}
	Try(1,n,a,used);
	return 0;
}
