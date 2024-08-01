#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    t=t*3;
    string s;
    while(t--){
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]=='?'){
            if(s[1]=='B' && s[2]=='C') cout<<"A"<<endl;
            else if(s[1]=='A' && s[2]=='B') cout<<"C"<<endl;
            else if(s[1]=='A' && s[2]=='C') cout<<"B"<<endl;
        }
    }
    return 0;
}
