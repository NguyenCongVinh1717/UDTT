#include <bits/stdc++.h>

using namespace std;
//void khoiTao(int *a,int n){
//	for(int i=1;i<=n;i++){
//		a[i]=i;
//	}
//}
//void sinh(int *a,int n,bool &ok){
//	int i=n-1;
//	while(i>=1&&a[i]>a[i+1]){
//		i--;
//	}
//	if(i==0){
//		ok=true;
//	}
//	else{
//		for(int j=n;j>=i+1;j--){
//			if(a[j]>a[i]){
//				swap(a[i],a[j]);
//				break;
//			}
//		}
//		reverse(a+i+1,a+n+1);
//	}
//}
void inKq(int *a,int n,int &dem,string name[]){
    cout << "A: " << name[a[1] - 1]
         << ", B: " << name[a[2] - 1]
         << ", C: " << name[a[3] - 1]
         << ", D: " << name[a[4] - 1] << endl;
    dem++;
}
void Try(int i,int *a,int n,int *used,int &dem,string name[]){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				inKq(a,n,dem,name);
			}
			else{
				Try(i+1,a,n,used,dem,name);
			}
			used[j]=0;
		}
	}
}
int main(){
	int n=4;
	int dem=0;
	int *a=new int[n+1];
	string name[] = {"Tung","Cuc","Truc","Mai"};
//	bool ok=false;
//	khoiTao(a,n);
//	while(ok==false){
//        cout << "A: " << name[a[1] - 1]
//             << ", B: " << name[a[2] - 1]
//             << ", C: " << name[a[3] - 1]
//             << ", D: " << name[a[4] - 1] << endl;
//        dem++;
//        sinh(a, n, ok);
//	}
	int *used=new int[n+1];
	for(int i=0;i<=n;i++){
		used[i]=0;
	}
	Try(1,a,n,used,dem,name);
	cout<<"Tong so cach xep la: "<<dem;
	
	return 0;
}