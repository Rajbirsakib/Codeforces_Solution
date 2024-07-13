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
        int count=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>1){
                count=1;
                break;
            }
        }
        if(count==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
