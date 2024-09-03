#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>=3 && s.substr(0,2)=="10" && stoi(s.substr(2))>=2 && s[2]!='0') cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
