#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        int arr[7];
        for(int i=0;i<7;i++) cin>>arr[i];
        sort(arr,arr+7);
        if(arr[0]+arr[1]==arr[2]) cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
        else cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }

    return 0;
}

