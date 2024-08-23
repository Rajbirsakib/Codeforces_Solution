#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>arr(n*2);
        for(int i=0;i<n*2;i++) cin>>arr[i];
        ll even=0,odd=0;
        for(int i=0;i<n*2;i++){
            if(arr[i]%2==0) even++;
            else odd++;
        }
        if(even==odd) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
