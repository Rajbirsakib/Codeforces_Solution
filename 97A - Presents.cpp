#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i) cout<<j+1<<" ";
        }
    }
    return 0;
}
