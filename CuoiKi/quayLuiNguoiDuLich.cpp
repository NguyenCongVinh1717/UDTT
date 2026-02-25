#include <bits/stdc++.h>
using namespace std;
void Try(int i,int **c,int n,int d,int &ans,int *visited,int *X){
	for(int j=1;j<=n;j++){
		if(visited[j]==0){
			X[i]=j;
			visited[j]=1;
			d+=c[X[i-1]][X[i]];
			if(i==n){
				ans=min(ans,d+c[X[n]][1]);
			}
			else{
				Try(i+1,c,n,d,ans,visited,X);
			}
			visited[j]=0;
			d-=c[X[i-1]][X[i]];
		}
	}
}
int main(){
	int n;
	cin>>n;
	int **c=new int*[n+1];
	for(int i=1;i<=n;i++){
    	c[i] = new int[n+1];
	}

	for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
        	cin >> c[i][j];
    	}
	}
	int *X=new int[n+1];
	int ans=INT_MAX;
	int d=0;
	int *visited=new int[n+1];
	for(int i=1;i<=n;i++){
		visited[i]=0;
	}
	X[1]=1;
	visited[1]=1;
	Try(2,c,n,d,ans,visited,X);
	cout<<ans;
	
	return 0;
}
