#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        int count=0;
        while(a<=n && b<=n){
            if(a>b) b=b+a;
            else a=a+b;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
