#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        int sum=a+b+c+n;
        int mx=max(max(a,b),c);
        if(sum%3==0 && sum/3>=mx) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
