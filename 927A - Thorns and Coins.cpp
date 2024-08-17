#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='@') {cnt1++; cnt2=0;}
            if(s[i]=='*') cnt2++;
            if(cnt2==2) break;
            if(s[i]=='.') cnt2=0;
        }
        cout<<cnt1<<endl;
    }

    return 0;
}
