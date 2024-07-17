#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t,n,a=0,b=0;
    cin>>t;
    while(t--){
        cin>>n;
        a=n*90; b=360;
        if(a%b==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
