#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,m,k,ans=0;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        ans=(n-1)+(m-1)*n;
        if(ans==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
