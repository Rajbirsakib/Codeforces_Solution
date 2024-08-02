#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=n-k;i<=n;i++) cout<<i<<" ";
        for(int i=n-k-1;i>=1;i--) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
