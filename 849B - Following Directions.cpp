#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        ll x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U') x++;
            if(s[i]=='R') y++;
            if(s[i]=='D') x--;
            if(s[i]=='L') y--;
            if(x==1 && y==1) break;
        }
        if(x==1 && y==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
