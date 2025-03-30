#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k,p;
    cin>>t;
    while(t--){
        cin>>n>>k>>p;
        if(k>(n*p) || k<((-n)*p)){
            cout<<-1<<endl; continue;
        }
        ll ans=(abs(k)+p-1)/p;
        cout<<ans<<endl;

    }

    return 0;
}
