#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,r,b,d;
    cin>>t;
    while(t--){
        cin>>r>>b>>d;
        if(d>0){
            if(min(r,b)*(d+1)>=max(r,b)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(r==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
