#include <bits/stdc++.h>
using namespace std;

void khoiTao(int n,int *a){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}

void sinh(int n,int *a,bool &ok){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		for(int j=n;j>=i+1;j--){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
				break;
		}
	}
			reverse(a+i+1,a+n+1);
	}
}

int main(){
	int n=6;
	int *a=new int[n+1];
	string name[] = {"Trang","Cong","Trung","Binh","Hoan","Mai"};
	bool ok=false;
	khoiTao(n,a);
	int d=0;
	while(ok==false){
		for(int i=1;i<=n;i++){
			if(i==n){
				cout<<name[a[i]-1];
				break;
			}
			cout<<name[a[i]-1]<<",";
		}
		d++;
		cout<<endl;
		sinh(n,a,ok);
	}
	cout<<d;
	return 0;
}