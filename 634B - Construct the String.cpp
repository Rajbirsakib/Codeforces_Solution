#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,a,b,count=0;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        string s;
        char c= 'a';
        for(int i=1,count=1;i<=n;i++,count++){
            s.push_back(c);
            c++;
            if(count== b){
                c='a'; count=0;
            }
            if(c>'z') c='a';
        }
        cout<<s<<endl;
    }

    return 0;
}
