#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n*2);
        ll count1=0, count0=0;
        for(int i=0;i<n*2;i++){
            cin>>a[i];
            if(a[i]==1) count1++;
            else count0++;
        }
        if(count0==0) cout<<0<<" "<<0<<endl;
        else if(count0>=count1) cout<<count0%2<<" "<<count1<<endl;
        else cout<<count1%2<<" "<<count0<<endl;
    }

    return 0;
}
