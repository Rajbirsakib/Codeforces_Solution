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
        long long count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
                count++;
                cout<<arr[i]<<endl;
                break;
            }
        }
        if(count==0) cout<<-1<<endl;
	}

    return 0;
}
