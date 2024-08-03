#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2==k%2 && k*k<=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
