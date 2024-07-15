#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],even=0,odd=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
            sum=sum+arr[i];
        }
        if(sum%2!=0 || sum==1) cout<<"YES"<<endl;
        else{
            if(odd!=0 && even!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
