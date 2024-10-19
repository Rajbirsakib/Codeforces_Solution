#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll mx=0,count=0;
        for(int i=0;i<n;i=i+2){
            count++;
            mx=max(arr[i],mx);
        }
        ll ans=mx+count;
        mx=0,count=0;
        for(int i=1;i<n;i=i+2){
            count++;
            mx=max(arr[i],mx);
        }
        ans=max(ans,mx+count);
        cout<<ans<<endl;
    }

    return 0;
}
