#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>arr[0]) ans+=arr[i]-arr[0];
        }
        cout<<ans<<endl;
    }

    return 0;
}

