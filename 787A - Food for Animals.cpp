#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>x>>y;
        x=max(0,x-a);
        y=max(0,y-b);

        if(x+y<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
