#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        ll count=0;
        while(r>1){
            count++;
            r=r/2;
        }
        cout<<count<<endl;
    }

    return 0;
}

