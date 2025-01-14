#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if((abs(a-b))%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
