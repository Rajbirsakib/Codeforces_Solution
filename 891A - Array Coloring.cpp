#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans=ans+arr[i];
        }
        if(ans%2==0) cout<<"YES"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
