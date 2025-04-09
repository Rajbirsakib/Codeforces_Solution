#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll zero=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') zero++;
            else{
                if(zero+1>ans) ans=zero+1;
            }
        }
        cout<<s.size()-ans<<endl;
    }

    return 0;
}
