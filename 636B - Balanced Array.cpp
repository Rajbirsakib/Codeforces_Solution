#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if((n/2)%2!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int even=0,odd=0;
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
                even=even+i;
            }
            for(int i=1;i<n-2;i=i+2){
                cout<<i<<" ";
                odd=odd+i;
            }
            cout<<even-odd<<endl;
        }
    }

    return 0;
}
