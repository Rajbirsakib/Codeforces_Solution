#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,m;
    cin>>t;
    while(t--){
        cin>>a>>b>>m;
        cout<<((m+a)/a)+((m+b)/b)<<endl;
    }

    return 0;
}
