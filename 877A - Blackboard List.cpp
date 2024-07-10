#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,arr[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]<0) cout<<arr[0]<<endl;
        else cout<<arr[n-1]<<endl;
    }
    return 0;
}
