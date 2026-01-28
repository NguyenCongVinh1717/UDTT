#include <bits/stdc++.h>

using namespace std;
//void khoiTao(int *a,int k){
//	for(int i=1;i<=k;i++){
//		a[i]=i;
//	}
//}
//void sinh(int *a,int n,int k,bool &ok){
//	int i=k;
//	while(i>=1&&a[i]==n-k+i){
//		i--;
//	}
//	if(i==0){
//		ok=true;
//	}
//	else{
//		a[i]++;
//		for(int j=i+1;j<=k;j++){
//			a[j]=a[j-1]+1;
//		}
//	}
//}
void inKq(int *a,int n,int k,int &dem,char s[]){
		for(int i=1;i<=k;i++){
			cout<<s[a[i]-1];
		}
		cout<<endl;
    dem++;
}
void Try(int i,int *a,int n,int k,int &dem,char s[]){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
			a[i]=j;
			if(i==k){
				inKq(a,n,k,dem,s);
			}
			else{
				Try(i+1,a,n,k,dem,s);
			}
		}
}
int main(){
	int n=7;
	int k=6;
	int dem=0;
	int *a=new int[n+1];
	char s[7]={'A','B','C','D','E','F','G'};
//	bool ok=false;
//	khoiTao(a,k);
//	while(ok==false){
//		for(int i=1;i<=k;i++){
//			cout<<s[a[i]-1];
//		}
//		dem++;
//		cout<<endl;
//		sinh(a,n,k,ok);
//	}
	a[0] = 0;
	Try(1,a,n,k,dem,s);
	cout<<"Tong so cach xep la: "<<dem;
	
	return 0;
}