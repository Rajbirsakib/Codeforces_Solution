#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,ans=1;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i-1]<=arr[i]){
            count++;
            ans=max(ans,count);
        }
        else count=1;
    }
    cout<<ans<<endl;

    return 0;
}
