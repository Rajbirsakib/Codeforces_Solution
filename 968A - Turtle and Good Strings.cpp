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
        if(s[0]==s[n-1]) cout<<"No"<<endl;
    }

    return 0;
}
