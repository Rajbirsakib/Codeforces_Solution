#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll x=n/3;
        ll ans1=x, ans2=(n-x)/2;
        if(ans1+(ans2*2)!=n) ans1++;
        cout<<ans1<<" "<<ans2<<endl;
    }

    return 0;
}
