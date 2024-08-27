#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>=m && n%2==m%2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
