#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,ll>a;
        for(int i=0;i<n;i++){
            a[s[i]]++;
        }
        ll ans=0;
        for(char c='A';c<='G';c++){
            if(a[c]<m) ans+=(m-a[c]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
