#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll m=n%10, s=n/10;
        cout<<s+m<<endl;
    }

    return 0;
}
