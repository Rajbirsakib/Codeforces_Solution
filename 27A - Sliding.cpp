#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m,r,c;
    cin>>t;
    while(t--){
        cin>>n>>m>>r>>c;
        ll ans= (2*m-1)*(n-r)+(m-c);
        cout<<ans<<endl;
    }

    return 0;
}
