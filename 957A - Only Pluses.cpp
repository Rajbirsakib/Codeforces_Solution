#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        sort(arr,arr+3);
        ll count=0;
        while(count<5){
            arr[0]++;
            count++;
            sort(arr,arr+3);
        }
        cout<<arr[0]*arr[1]*arr[2]<<endl;
    }

    return 0;
}
