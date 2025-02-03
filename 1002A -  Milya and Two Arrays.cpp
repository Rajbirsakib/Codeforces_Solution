#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        set<ll> c1,c2;

        for(int i=0;i<n;i++){
            c1.insert(a[i]);
            c2.insert(b[i]);
        }

        if(c1.size()+c2.size()>3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
