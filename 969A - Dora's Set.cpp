#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(l%2==0) l++;
        ll count=0;
        /*if(r-l>=2){
            while(r>=l+2){
                count++; l=l+4;
            }
        }*/
        for(ll i=l;i+2<=r;i=i+4) count++;
        cout<<count<<endl;
    }

    return 0;
}
