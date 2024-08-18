#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long count=1;
        while(count*2<=n) count=count*2;
        cout<<count<<endl;
    }

    return 0;
}
