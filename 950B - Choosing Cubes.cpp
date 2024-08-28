#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,f,k;
    cin>>t;
    while(t--){
        cin>>n>>f>>k;
        int arr[n];
        map<ll,ll>mp;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        ll ans=arr[f];
        sort(arr+1,arr+n+1);
        reverse(arr+1,arr+n+1);
        ll count=0;

        for(int i=1;i<=k;i++){
            if(arr[i]==ans) count++;
        }
        if(mp[ans]==count) cout<<"YES"<<endl;
        else if(count>=1) cout<<"MAYBE"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
