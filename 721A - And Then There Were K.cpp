#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long ans=1;
        while(ans<=n) ans=ans*2;
        ans=ans/2; ans--;
        cout<<ans<<endl;
    }
    return 0;
}
