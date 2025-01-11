#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,x,y,k;
    cin>>t;
    while(t--){
        cin>>x>>y>>k;
        ll mx=(x+k-1)/k, my=(y+k-1)/k;
        ll ans=0;
        ans+=(2*max(mx,my));
        if(mx>my) ans--;
        cout<<ans<<endl;
    }

    return 0;
}
