#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll count=1;
        for(int i=0;i<n-1;i++) {
            if((abs(arr[i]-arr[i+1]))!=5 && (abs(arr[i]-arr[i+1]))!=7){
                count=0;
                break;
            }
        }
        if(count) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
