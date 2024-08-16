#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long ans=0;
        if((4*n)-4<k || k%2!=0) cout<<(k/2)+1<<endl;
        else cout<<k/2<<endl;
    }

    return 0;
}
