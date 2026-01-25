#include <bits/stdc++.h>
using namespace std;
void nhapMang(int n,int *a){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
int tongLe(int n, int *a){
    if(n == 1){
    	if(a[0]%2!=0){
    		return a[0];
		}
		else{
			return 0;
		}
	}
    if(a[n-1]%2!= 0)
        return a[n-1]+tongLe(n-1,a);
    else
        return tongLe(n-1,a);
}


int main(){
	int n;
	do{
		cout<<"Nhap n=";
		cin>>n;
		if(n<0){
			cout<<"n phai duong, nhap lai!"<<endl;
		}
	}while(n<0);
	int *a=new int[n];
	nhapMang(n,a);
	cout<<"Tong cac phan tu le trong day la: "<<tongLe(n,a)<<endl;
	
	
	
	return 0;
}