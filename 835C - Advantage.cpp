#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            brr[i]=arr[i];
        }
        sort(brr,brr+n);
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[n-1]) cout<<arr[i]-brr[n-1]<<" ";
            else cout<<arr[i]-brr[n-2]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
