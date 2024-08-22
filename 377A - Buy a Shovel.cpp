#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll k,r;
    cin>>k>>r;
    ll count=0;
    for(int i=1;;i++){
        count=count+k;
        if(count%10==0 || count%10==r){
            cout<<i; break;
        }
        else continue;
    }

    return 0;
}
