#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string s;
        ll ans=0,count=0,b=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(b==0 && s.size()+ans<=m){
                ans+=s.size();
                count++;
            }
            else b=1;
        }
        cout<<count<<endl;
    }

    return 0;
}
