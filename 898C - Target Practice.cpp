#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        char c;
        ll ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>c;
                if(c=='X'){
                    int count=min(i+1,10-i);
                    count=min(count,min(j+1,10-j));
                    ans+=count;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
