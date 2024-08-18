#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n>k){
            if(n%k==0) cout<<1<<endl;
            else if(n%k!=0) cout<<2<<endl;
        }
        else if(n<k){
            long long a=k/n;
            if(k%n) a++;
            cout<<a<<endl;
        }
        else cout<<1<<endl;
    }

    return 0;
}
