#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(min(a,b)>=min(c,d) && max(a,b)<=max(c,d)|| max(a,b)<=min(c,d)) cout<<"NO"<<endl;
        else if(min(a,b)<=min(c,d) &&max(a,b)>=max(c,d)||min(a,b)>=max(c,d)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
