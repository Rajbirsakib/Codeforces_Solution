#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,arr[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0,count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) continue;
                count++;
            if(arr[i+1]!=arr[i] || i==n-1){
                ans=max(ans,count);
                count=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

