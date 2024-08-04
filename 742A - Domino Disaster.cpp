#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='U') s[i]='D';
            else if(s[i]=='D') s[i]='U';
        }
        cout<<s<<endl;
    }
    return 0;
}
