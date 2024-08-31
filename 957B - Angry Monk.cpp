#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[k];
        for(int i=0;i<k;i++) cin>>arr[i];
        sort(arr,arr+k);
        ll count=0;
        for(int i=0;i<k-1;i++) count+=(2*arr[i]-1);
        cout<<count<<endl;
    }

    return 0;
}
