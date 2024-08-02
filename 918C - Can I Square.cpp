#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        long long res=sqrt(sum);
        if(res*res==sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
