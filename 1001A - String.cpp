#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') count++;
        }
        cout<<count<<endl;

    }

    return 0;
}
