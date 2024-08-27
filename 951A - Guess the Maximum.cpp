#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans=INT_MAX,count=0;
        for(int i=0;i<n-1;i++){
            count=max(arr[i],arr[i+1]);
            ans=min(ans,count);
        }
        cout<<ans-1<<endl;
    }

    return 0;
}
