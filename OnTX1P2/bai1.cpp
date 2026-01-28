#include <bits/stdc++.h>
using namespace std;
void khoiTao(int *a,int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(int *a,int n,bool &ok){
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

void inKq(int *a,int n,char ghe[],string ten[]){
	for(int i=1;i<=n;i++){
		cout<<ghe[i-1]<<":"<<ten[a[i]-1]<<"|";
	}
	cout<<endl;
}
void Try(int i,int*a,int n,int *used,char ghe[],string ten[]){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				inKq(a,n,ghe,ten);
			}
			else{
				Try(i+1,a,n,used,ghe,ten);
			}
			used[j]=0;
		}
	}
}
int main(){
	int n=4;
	int *a=new int[n+1];
	bool ok=false;
	char ghe[]={'A','B','C','D'};
	int *used=new int[n+1];
	for(int i=1;i<=n;i++){
		used[i]=0;
	}
	khoiTao(a,n);
	cout<<"-------------------------SINH HOAN VI--------------------------"<<endl;
	string ten[]={"Tung","Cuc","Truc","Mai"};
	while(ok==false){
		for(int i=1;i<=n;i++){
			cout<<ghe[i-1]<<":"<<ten[a[i]-1]<<"|";
		}
		cout<<endl;
		sinh(a,n,ok);
	}
	cout<<"--------------------------QUAY LUI HOAN VI-------------------"<<endl;
	Try(1,a,n,used,ghe,ten);
	return 0;
}
