#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        ll ans=0;
        for(int i=0;i<3;i++){
            ans=arr[2]-arr[0];
        }
        cout<<ans<<endl;
    }

    return 0;
}
