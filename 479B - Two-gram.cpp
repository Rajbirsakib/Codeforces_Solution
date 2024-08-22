#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    string s,s1;
    cin>>s;
    ll ans=0,count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]) count++;
        }
        if(ans<count){
            ans=max(ans,count);
            s1=string(1,s[i])+string(1,s[i+1]);
        }
    }
    cout<<s1<<endl;

    return 0;
}
