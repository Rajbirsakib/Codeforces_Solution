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
        map<char,ll>m;
        for(int i=0;i<n;i++) m[s[i]]++;
        ll ans=0;
        for(int i=0;i<26;i++){
            if(m['A'+i]>=(i+1)) ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
