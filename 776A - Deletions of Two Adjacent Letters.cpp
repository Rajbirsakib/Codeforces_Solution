#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s; cin>>s;
        char c; cin>>c;
        int n=s.size(),count=0;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                if(i%2==0 && (n-1-i)%2==0){
                    count=1; break;
                }
            }
        }
        if(count==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
