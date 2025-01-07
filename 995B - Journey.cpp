#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,a,b,c;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c;
        ll sum=a+b+c, full=n/sum;
        ll total=full*sum;
        ll count=full*3;

        if (total<n){
            count++; total+=a;
        }
        if(total<n){
            count++; total+=b;
        }
        if(total<n){
            count++; total+=c;
        }
        cout<<count<<endl;

    }

    return 0;
}

