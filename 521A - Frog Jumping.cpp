#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,k;
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        int ans=0;
        if(k%2==1) ans=(k/2)+1;
        else ans=k/2;
        cout<<(ans*a)-((k-ans)*b)<<endl;
    }
    return 0;
}
