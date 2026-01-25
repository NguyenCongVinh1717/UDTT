#include <bits/stdc++.h>
using namespace std;

void khoiTao(int k,int *a){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}

void sinh(int n,int *a,bool &ok,int k){
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
	int n=6;
	int k=4;
	int *a=new int[k+1];
	string name[] = {"Trang","Cong","Trung","Binh","Hoan","Mai"};
	bool ok=false;
	khoiTao(k,a);
	while(ok==false){
		for(int i=1;i<=k;i++){
//			if(i==k){
//				cout<<name[a[i]-1];
//				break;
//			}
			cout<<name[a[i]-1]<<",";
		}
		cout<<endl;
		sinh(n,a,ok,k);
	}
	return 0;
}