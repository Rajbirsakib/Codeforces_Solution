#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll>arr(n),brr(200005);
    for(int i=0;i<n;i++) cin>>arr[i];
    int count=0,ans=1e9,a=0;
    for(int i=0;i<n;i++) brr[i+1]=brr[i]+arr[i];

    for(int i=0;i<=n-k;i++){
        count=brr[i+k]-brr[i];
        if(count<ans){
            ans=count;
            a=i+1;
        }
    }
    cout<<a<<endl;

    return 0;
}
