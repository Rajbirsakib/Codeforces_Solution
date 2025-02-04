#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());

        ll l=0,r=n-1,count=0;
        while(l<r){
            ll sum=a[l]+a[r];
            if(sum==k){
                count++;
                l++; r--;
            }
            else if(sum<k) l++;
            else r--;
        }
        cout<<count<<endl;
    }

    return 0;
}
