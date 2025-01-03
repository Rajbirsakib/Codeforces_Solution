#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll f=0,z=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0 && !z){
                f++; z=1;
            }
            if(arr[i]==0) z=0;
        }
        if(f>2) cout<<2<<endl;
        else cout<<f<<endl;

    }

    return 0;
}
