#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        bool count=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='i' && s[i+1]=='t') count=true;
        }
        if(count==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
