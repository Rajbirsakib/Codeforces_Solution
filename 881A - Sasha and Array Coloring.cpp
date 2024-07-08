#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,arr[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int start=0, end=n-1, ans=0;
        while(start<end){
            ans=ans+(arr[end]-arr[start]);
            start++;
            end--;
        }
        cout<<ans<<endl;
    }

    return 0;
}
