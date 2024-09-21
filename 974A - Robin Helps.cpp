#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll a=0,b=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=k) a+=arr[i];
            else if(arr[i]==0 && a>0){
                a--; b++;
            }
        }
        cout<<b<<endl;
    }

    return 0;
}
