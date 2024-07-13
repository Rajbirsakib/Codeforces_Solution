#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a<b) a=a*2;
        else b=b*2;
        int ans=max(a,b)*max(a,b);
        cout<<ans<<endl;
    }

    return 0;
}
