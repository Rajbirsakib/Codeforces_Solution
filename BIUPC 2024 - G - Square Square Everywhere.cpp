#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        ll ans=0,count=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            ans=sqrt(arr[i]);
            if(ans*ans!=arr[i]) count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
