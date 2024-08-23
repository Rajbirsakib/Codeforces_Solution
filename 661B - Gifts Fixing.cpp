#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n),brr(n);
        ll ans=0,mn=INT_MAX,mx=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mn=min(mn,arr[i]);
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
            mx=min(mx,brr[i]);
        }
        for(int i=0;i<n;i++) ans+=max(arr[i]-mn,brr[i]-mx);

        cout<<ans<<endl;
    }

    return 0;
}

