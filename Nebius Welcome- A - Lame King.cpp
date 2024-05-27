#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        a=abs(a);b=abs(b);
        if(a==b) cout<<a+b<<endl;
        else cout<<2*max(a,b)-1<<endl;
    }
    return 0;
}
