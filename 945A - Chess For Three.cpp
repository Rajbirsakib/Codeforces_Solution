#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if((a+b+c)%2!=0) cout<<-1<<endl;
        else{
            if(a+b<c) cout<<a+b<<endl;
            else cout<<(a+b+c)/2<<endl;
        }
    }

    return 0;
}
