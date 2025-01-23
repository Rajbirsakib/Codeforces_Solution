#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(l==1 && r==1) cout<<1<<endl;
        else cout<<abs(l-r)<<endl;

    }

    return 0;
}
