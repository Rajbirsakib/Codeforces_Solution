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
        sort(arr.begin(),arr.end());
        ll count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++; i++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
