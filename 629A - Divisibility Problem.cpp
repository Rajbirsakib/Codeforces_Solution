#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b!=0) cout<<b-(a%b)<<endl;
        else cout<<a%b<<endl;
    }
    return 0;
}
