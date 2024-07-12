#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) count=1;
        }
        if(count==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
