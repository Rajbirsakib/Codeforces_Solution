#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long ans=0;
        for(int i=0;i<n;i++){
            ans=arr[n-1]-arr[0];
        }
        cout<<ans<<endl;
    }

    return 0;
}
