#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n);
        ll ma=0,mi=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ma=max(ma,arr[i]);
            mi=min(mi,arr[i]);
        }
        ll a=0,b=0;
        for(int i=0;i<n;i++){
            if(arr[i]==mi) a++;
            if(arr[i]==ma) b++;
        }
        if(ma==mi) cout<<a*(a-1)<<endl;
        else cout<<2*(a*b)<<endl;
    }

    return 0;
}
