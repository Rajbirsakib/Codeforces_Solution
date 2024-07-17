#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n],count=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==count) count++;
            count++;
        }
        cout<<count-1<<endl;
    }
    return 0;
}
