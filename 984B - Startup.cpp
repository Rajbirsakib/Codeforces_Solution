#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k,b,c;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<ll>arr(k+1);
        for(int i=0;i<k;i++){
            cin>>b>>c;
            arr[b]+=c;
        }
        sort(arr.rbegin(),arr.rend());
        ll ans=0;
        for(int i=0;i<min(k,n);i++){
            ans+=arr[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
