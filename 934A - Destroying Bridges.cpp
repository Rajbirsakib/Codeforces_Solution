#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n-1<=k) cout<<1<<endl;
        else cout<<n<<endl;
    }

    return 0;
}
