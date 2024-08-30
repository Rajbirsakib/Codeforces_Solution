#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x1,x2,y1,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        if(x1>y1 && x2>y2) cout<<"YES"<<endl;
        else if(x1<y1 && x2<y2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

