#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        ll ans=0;
        ans+=(n/2)*b;
        if(n%2) ans=ans+a;
        cout<<min(n*a,ans)<<endl;
    }

    return 0;
}
