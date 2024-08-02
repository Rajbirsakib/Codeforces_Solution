#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        long long p=0,m=0;
        for(int i=0;i<n;i++){
            if(s[i]=='+') p++;
            else m++;
        }
        if(p==m) cout<<0<<endl;
        else if(p>m) cout<<p-m<<endl;
        else cout<<m-p<<endl;
    }
    return 0;
}
