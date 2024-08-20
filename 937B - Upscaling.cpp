#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[2*n][2*n];
        for(int i=0;i<n*2;i++){
            for(int j=0;j<n*2;j++){
                if(i%4<2 && j%4<2) arr[i][j]='#';
                else if(i%4>1 && j%4>=2) arr[i][j]='#';
                else arr[i][j]='.';
            }
        }
        for(int i=0;i<n*2;i++){
            for(int j=0;j<n*2;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
