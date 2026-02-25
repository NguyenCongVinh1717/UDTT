#include <bits/stdc++.h>
using namespace std;


int main(){
	string X,Y;
	cout<<"X=";
	cin>>X;
	cout<<"Y=";
	cin>>Y;
	int n=X.size();
	int m=Y.size();
	int F[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0){
				F[i][j]=0;
			}
			else{
				if(X[i-1]==Y[j-1]){
					F[i][j]=F[i-1][j-1]+1;
				}
				else{
					F[i][j]=max(F[i][j-1],F[i-1][j]);
				}
			}
		}
	}
	cout<<F[n][m];
	return 0;
}
