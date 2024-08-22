#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    int arr[m];
    ll t=0,in=1;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        if(arr[i]>=in) t+=arr[i]-in;
        else t+=n-(in-arr[i]);
        in=arr[i];
    }
    cout<<t<<endl;

    return 0;
}
