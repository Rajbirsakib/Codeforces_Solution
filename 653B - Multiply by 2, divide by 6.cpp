#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a=0,b=0;
        while(n%2==0){
            a++; n=n/2;
        }
        while(n%3==0){
            b++; n=n/3;
        }
        if(n==1){
            if(a<=b){
                long long ans=min(a,b);
                a=a-ans; b=b-ans;
                ans=ans+(b*2);
                cout<<ans<<endl;
            }
            else cout<<"-1"<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}
