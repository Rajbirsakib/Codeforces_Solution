#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1=s;
        sort(s.begin(),s.end());
        if(s[0]==s[s.size()-1]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(s==s1) swap(s[0],s[s.size()-1]);
            cout<<s<<endl;
        }
    }

    return 0;
}
