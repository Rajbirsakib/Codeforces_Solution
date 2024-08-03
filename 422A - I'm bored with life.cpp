#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,sum0=1;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++){
        sum0=sum0*i;
    }
    cout<<sum0<<endl;

    return 0;
}
