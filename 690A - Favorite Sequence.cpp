#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        long long count=0;
        for(int i=0;i<n;i++){
            if(i%2==0){ cout<<arr[count]<<" "; continue; }
            else { cout<<arr[n-1-count]<<" "; count++; }
        }
        cout<<endl;
    }

    return 0;
}
