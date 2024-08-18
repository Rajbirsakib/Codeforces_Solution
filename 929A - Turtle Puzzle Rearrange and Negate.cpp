#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+abs(arr[i]);
        }
        cout<<sum<<endl;
    }

    return 0;
}
