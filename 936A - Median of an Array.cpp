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
        sort(arr,arr+n);
        long long index=(n+1)/2, value=arr[index-1], count=1;
        for(int i=index;i<n;i++){
            if(arr[i]==arr[i-1]) count++;
            else break;
        }
        cout<<count<<endl;
    }

    return 0;
}
