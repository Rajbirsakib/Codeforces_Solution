#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int sum=a+b;
        if((sum%2)!=0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
