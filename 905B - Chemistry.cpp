#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        ll count=0;
        for(auto it:mp){
            if(it.second%2!=0) count++;
        }
        if(count-1<0) count=0;
        else count=count-1;

        if(count<=k && n>=k) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
