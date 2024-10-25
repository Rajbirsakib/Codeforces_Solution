#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll x=0,m=1;
        bool s_t=true;
        while(abs(x)<=n){
            if(s_t) x-=m;
            else x+=m;
            m+=2;
            if(abs(x)>n){
                if(s_t) cout<<"Sakurako"<<endl;
                else cout<<"Kosuke"<<endl;
                break;
            }
            s_t=!s_t;
        }
    }

    return 0;
}
