#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    //while(t--){
        string s[t];
        for(int i=0;i<t;i++) cin>>s[i];
        string s1=s[0],s2;
        ll count1=0,count2=0;
        for(int i=0;i<t;i++){
            if(s1==s[i]) count1++;
            else {s2=s[i]; count2++;}
        }
        if(count1>count2) cout<<s1<<endl;
        else cout<<s2<<endl;
    //}

    return 0;
}
