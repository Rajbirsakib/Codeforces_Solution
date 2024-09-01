#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans=0;
        ans= n/4; ans+=(n%4)/2;
        cout<<ans<<endl;
    }

    return 0;
}
