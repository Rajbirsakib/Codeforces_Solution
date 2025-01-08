#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll count=1;
        while(n>3){
            count*=2; n/=4;
        }
        cout<<count<<endl;
    }

    return 0;
}
