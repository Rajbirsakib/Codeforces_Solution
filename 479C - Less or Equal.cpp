#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    if(k==0){
        if(arr[0]>1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    else if(k<=n-1 || k==n){
        if(arr[k]!=arr[k-1]) cout<<arr[k-1]<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
