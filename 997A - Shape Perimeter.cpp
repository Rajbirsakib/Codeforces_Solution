#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll ans=4*n*m;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            if(i==0) continue;
            ans-=2*(m-x+m-y);
        }
        cout<<ans<<endl;
    }

    return 0;
}
