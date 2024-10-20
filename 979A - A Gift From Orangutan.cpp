#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n),b(n),c(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==1) cout<<0<<endl;
        else{
            sort(arr.begin(), arr.end());
            arr.insert(arr.begin(), arr[n-1]);
            ll ans=0, mx=0, mn=1e9;
            for(int i=0;i<n;i++){
                mx=max(mx,arr[i]);
                mn=min(mn,arr[i]);
                ans+=(mx-mn);
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
