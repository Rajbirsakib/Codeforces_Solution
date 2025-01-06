#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<max(n,m)+1<<endl;
    }

    return 0;
}
