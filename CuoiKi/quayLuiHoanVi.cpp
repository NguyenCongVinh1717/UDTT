#include <bits/stdc++.h>
using namespace std;
void inkq(int *a,int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int *a,int n,int *used,int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				inkq(a,n);
			}
			else{
				Try(a,n,used,i+1);
			}
			used[j]=0;
		}
	}
}
int main(){
	int n
	;
	cout<<"n=";
	cin>>n;
	int *a=new int[n+1];
	int *used=new int[n+1];
	for(int i=0;i<=n;i++){
		used[i]=0;
	}
	Try(a,n,used,1);
	
	
	return 0;
}
