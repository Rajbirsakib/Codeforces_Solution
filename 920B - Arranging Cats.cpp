#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>n;
        cin>>s1>>s2;
        long long s=0,f=0,count=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1') s++;
            if(s2[i]=='1') f++;
            if(s2[i]!=s1[i] && s2[i]=='1') count++;
        }
        if(s>f) count=count+(s-f);
        cout<<count<<endl;
    }

    return 0;
}
