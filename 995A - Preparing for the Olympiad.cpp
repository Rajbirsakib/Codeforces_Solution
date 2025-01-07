#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n),brr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>brr[i];
        ll ans=arr[n-1];
        for(int i=0;i<n-1;i++){
            if(arr[i]>brr[i+1]) ans+=arr[i]-brr[i+1];
        }
        cout<<ans<<endl;

    }

    return 0;
}

