#include <bits/stdc++.h>
using namespace std;
void khoiTao(int *a,int k){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(int *a,int n,int k,bool &ok){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
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
	bool ok=false;
	khoiTao(a,k);
	while(ok==false){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh(a,n,k,ok);
	}
	return 0;
}
