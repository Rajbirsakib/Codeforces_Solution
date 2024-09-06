#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%2==0 && b%2==0) cout<<"Yes"<<endl;
        else if(b%2==1 && a>=2){
            a=a-2;
            if(a%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
}
