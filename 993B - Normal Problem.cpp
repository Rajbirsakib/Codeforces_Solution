#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //string s1=s;
        reverse(s.begin(), s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='p') s[i]='q';
            else if(s[i]=='q') s[i]='p';
        }
        cout<<s<<endl;
    }

    return 0;
}
