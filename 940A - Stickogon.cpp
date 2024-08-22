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
        sort(arr.begin(),arr.end());
        ll ans=0,count=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) count++;
            if((arr[i]!=arr[i-1]) || i==n-1){
                ans+=count/3;
                count=1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
