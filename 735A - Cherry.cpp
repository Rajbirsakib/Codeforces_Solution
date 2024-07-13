#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,arr[i]*arr[i+1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
