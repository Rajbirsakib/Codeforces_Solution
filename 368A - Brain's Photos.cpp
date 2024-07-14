#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]!='W' && arr[i][j]!='B' && arr[i][j]!='G') count=1;
        }
    }
    if(!count) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
    return 0;
}
