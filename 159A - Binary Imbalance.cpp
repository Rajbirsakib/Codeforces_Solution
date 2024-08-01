#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') a++;
            else b++;
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                count=1;
                break;
            }
        }
        if(a>b || count) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
