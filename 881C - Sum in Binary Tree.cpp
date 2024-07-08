#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long sum=0;
        while(n!=0){
            sum=sum+n;
            n=n/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
