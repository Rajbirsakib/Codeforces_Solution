#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        if(s.size()==1) cout<<"YES"<<endl;
        else if(s.size()==2){
            if(s[0]==s[1]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else if(s.size()>=3) cout<<"NO"<<endl;
    }
    return 0;
}
