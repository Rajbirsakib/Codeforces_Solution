#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll s=n-k+1, e=n, l=e-s+1;
        if(s%2==0){
            if(l==1 || (l/2)%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            if(l>0 && ((l+1)/2)%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

    return 0;
}
