#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll sum=0,count=0,mx=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mx=max(arr[i],mx);
            if(sum-mx==mx) count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
