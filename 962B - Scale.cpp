#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<string>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i=i+k){
            for(int j=0;j<n;j=j+k) cout<<a[i][j];
            cout<<endl;
        }
    }

    return 0;
}
