#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<ll>a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        bool ans=true;
        ll prev=min(a[0], b[0]-a[0]);

        for(int i=1;i<n;i++){
            ll op1 =a[i];
            ll op2 = b[0]-a[i];
            if(op1>= prev && op2>= prev) prev = min(op1, op2);
            else if(op1>= prev) prev =op1;
            else if(op2>= prev) prev =op2;
            else{
                ans=false; break;
            }
        }
        cout<<(ans? "YES" : "NO")<<endl;
    }

    return 0;
}
