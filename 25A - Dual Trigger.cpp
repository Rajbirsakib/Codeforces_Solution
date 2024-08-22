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
        ll count=0,a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') {count++; a=i;}
        }
        if(count%2==0 && count!=2) cout<<"Yes"<<endl;
        else if(count==2 && s[a]!=s[a-1]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
