#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                if(ans<arr[i-1]) ans=arr[i-1];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
