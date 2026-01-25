#include <bits/stdc++.h>
using namespace std;

void thapHaNoi(int n,char A,char B,char C){
    if(n==1){
        cout<<"Chuyen dia 1 tu "<<A<<" sang "<<C<<endl;
        return;
    }

    thapHaNoi(n-1,A,C,B);
    cout <<"Chuyen dia "<<n<<" tu "<<A<<" sang "<<C<<endl;
    thapHaNoi(n-1,B,A,C);
}

int main(){
    int n;
    cout<<"Nhap so dia n = ";
    cin>>n;
    thapHaNoi(n,'A','B','C');
    return 0;
}
