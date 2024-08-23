#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        ll count=0,j=0;
        for(int i=0;i<m && j<n;i++){
            if(a[j]==b[i]){
                j++;
                count++;
            }
        }
        cout<<count<<endl;

    }

    return 0;
}
