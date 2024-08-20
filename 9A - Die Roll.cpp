#include<bits/stdc++.h>
using namespace std;
int main(){
    long long y,w;
    cin>>y>>w;
    int ans=max(y,w);
    int a=7-ans;
    int b=__gcd(a,6);
    cout<<(a/b)<<"/"<<(6/b)<<endl;

    return 0;
}
