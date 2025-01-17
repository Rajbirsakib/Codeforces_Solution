#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<ll> fre(n+1);
        ll count=0;
        for(int i=0;i<n;i++){
            fre[a[i]]++;
            count=max(fre[a[i]], count);
        }
        cout<<n-count<<endl;
    }

    return 0;
}

