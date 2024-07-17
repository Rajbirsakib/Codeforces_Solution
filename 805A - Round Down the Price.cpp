#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t,m;
    cin>>t;
    while(t--){
        cin>>m;
        long long x=1,ans=m-x;
        while(x<=m){
            ans=min(ans,m-x);
            x=x*10;
        }
        cout<<ans<<endl;
    }

    return 0;
}
