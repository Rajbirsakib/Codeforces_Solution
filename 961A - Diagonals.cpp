#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n>=k){
            if(k>0) cout<<1<<endl;
            else cout<<0<<endl; continue;
        }
        k=k-n;
        ll count=1, p=n-1;
        while(k>0){
            k-=p; count++;
            if(k<=0) break;
            k-=p;
            count++; p--;
        }
        cout<<count<<endl;
    }

    return 0;
}
