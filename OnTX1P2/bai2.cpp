#include <bits/stdc++.h>
using namespace std;
void khoiTao(int *a,int k){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(int *a,int n,bool &ok,int k){
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

void inKq(int *a,int k,char s[]){
	for(int i=1;i<=k;i++){
		cout<<s[a[i]-1]<<"|";
	}
	cout<<endl;
}
void Try(int i,int*a,int n,char s[],int k){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
			a[i]=j;
			if(i==k){
				inKq(a,k,s);
			}
			else{
				Try(i+1,a,n,s,k);
			}
		}
}
int main(){
	int n=4;
	int k=2;
	int *a=new int[k+1];
	bool ok=false;
	char s[]={'A','B','C','D'};
	khoiTao(a,k);
	cout<<"-------------------------SINH TO HOP--------------------------"<<endl;
	while(ok==false){
		for(int i=1;i<=k;i++){
			cout<<s[a[i]-1]<<"|";
		}
		cout<<endl;
		sinh(a,n,ok,k);
	}
	cout<<"--------------------------QUAY LUI TO HOP-------------------"<<endl;
	a[0]=0;
	Try(1,a,n,s,k);
	return 0;
}
