#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,ans=0;
    cin>>t;
    while(t--){
        cin>>n;
        ans=n/10;
        if(n%10==9) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
