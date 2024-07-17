#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n],count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k) count=1;
        }
        if(count==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}

