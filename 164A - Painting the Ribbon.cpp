#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(m==1) cout<<"NO"<<endl;
        else{
            ll ans=(n+m-1)/m; ans=n-ans;
            cout<<((ans<=k)?"NO":"YES")<<endl;
        }
    }

    return 0;
}
