#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ll count=0;
        bool pos=true;
        for(int i=0;i<n;i++){
            if(b[i]>a[i]){
                count=b[i]-a[i];
                for(int j=0;j<n;j++){
                    if(i!=j){
                        if((a[j]-b[j])<count){
                            cout<<"NO"<<endl;
                            pos=false;
                            break;
                        }
                    }
                }
                if(!pos) break;
            }
        }
        if(pos) cout<<"YES"<<endl;
    }

    return 0;
}
