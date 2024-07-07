#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,s;
    cin>>n>>k;
    if(n%2==0) s=n/2;
    else s=(n+1)/2;
    if(k<=s) cout<<(k*2)-1<<endl;
    else cout<<(k-s)*2<<endl;
    return 0;
}
