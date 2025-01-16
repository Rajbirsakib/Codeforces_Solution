#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>x>>y;
        if(x<y) cout<<(n+x-1)/x<<endl;
        else cout<<(n+y-1)/y<<endl;
    }

    return 0;
}
