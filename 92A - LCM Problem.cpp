#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(2*l>r) cout<<-1<<" "<<-1<<endl;
        else cout<<l<<" "<<2*l<<endl;
    }

    return 0;
}
