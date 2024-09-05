#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,a1,a2,b1,b2;
    cin>>t;
    while(t--){
        cin>>a1>>a2>>b1>>b2;
        ll count=0;
        if((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2)) count+=2;
        if((a2>b1 && a1>=b2) || (a2>=b1 && a1>b2)) count+=2;

        cout<<count<<endl;
    }

    return 0;
}
