#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n==k){
            for(int i=0;i<n;i++) cout<<1<<" ";
            cout<<endl;
        }
        else if(k==1){
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }

    return 0;
}
