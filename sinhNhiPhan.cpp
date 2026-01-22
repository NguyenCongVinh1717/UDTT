#include <bits/stdc++.h>
using namespace std;

//void khoiTao(int n, int *a){
//	for(int i=1;i<=n;i++){
//		a[i]=0;
//	}
//}
//
//bool check(int n, int *a, int k){
//    for(int i = 1; i <= n - k + 1; i++){
//        bool ok = true;
//        for(int j = i; j <= i + k - 1; j++){
//            if(a[j] == 0){
//                ok = false;
//                break;
//            }
//        }
//        if(ok) return true;
//    }
//    return false;
//}
//
//void sinh(int n,int *a,bool &ok){
//	int i=n;
//	while(i>=1&&a[i]==1){
//		a[i]=0;
//		i--;
//	}
//	if(i==0){
//		ok=true;
//	}
//	else{
//		a[i]=1;
//	}
//}





void khoiTao(int n,int*a){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}

void sinh(int n,int *a,bool &ok){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=true;
	}
	else{
		a[i]=1;
	}
}

int main(){
	int n,k;
	cout<<"Nhap n=";
	cin>>n;
	int *a=new int[n];
	bool ok=false;
	khoiTao(n,a);
	while(ok==false){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh(n,a,ok);
	}
	
	
	return 0;
}

