#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%7==0){
            cout<<n<<endl; continue;
        }
        n=(n/10)*10;
        if(n%7==0){
            cout<<n<<endl;
            continue;
        }
        n++;
        while(n%10!=0){
            if(n%7==0) break;
            n++;
        }
        cout<<n<<endl;
    }

    return 0;
}
