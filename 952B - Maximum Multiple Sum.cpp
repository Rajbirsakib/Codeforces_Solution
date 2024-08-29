#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll count=0,ans=0;
        for(int i=2;i<=n;i++){
            ll k=n/i;
            ll sum=i*k*(k+1)/2;
            if(sum>count){
                count=sum;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
