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
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<=arr[i+1] && arr[i]>=arr[i-1]*2){
                arr[i]-=2*arr[i-1];
                arr[i+1]-=arr[i-1];
                arr[i-1]=0;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0) { count=1; break; }
        }
        if(count==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
