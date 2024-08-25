#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x<y) cout<<x<<" "<<y<<endl;
        else cout<<y<<" "<<x<<endl;
    }

    return 0;
}
