#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
int timSoChanNN(int *a,int l,int r){
	if(l==r){
		if(a[l]%2==0)	return a[l];
		else{
			return INT_MAX;
		}
	}
	else{
		int m=(l+r)/2;
		int minTrai=timSoChanNN(a,l,m);
		int minPhai=timSoChanNN(a,m+1,r);
		return min(minTrai,minPhai);
	}
}
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int *a=new int[n];
	nhapMang(a,n);
	int kq=timSoChanNN(a,0,n-1);
	if(kq==INT_MAX){
		cout<<"K co so chan"<<endl;
	}
	else{
		cout<<"Chan min="<<kq<<endl;
	}
	
	return 0;
}
