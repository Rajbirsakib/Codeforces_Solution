#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<2<<endl; continue;
        }
        else if(n==2 || n==3){
            cout<<1<<endl; continue;
        }
        else if(n%3==0) cout<<n/3<<endl;
        else if(n%3==1) cout<<(2+(n-4)/3)<<endl;
        else if(n%3==2) cout<<(1+(n/3))<<endl;
    }
    return 0;
}

