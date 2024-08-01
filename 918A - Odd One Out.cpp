#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a==b) cout<<c<<endl;
        else if(a==c) cout<<b<<endl;
        else if(b==c) cout<<a<<endl;
    }
    return 0;
}
