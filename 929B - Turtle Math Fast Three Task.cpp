#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        ll sum=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
            mp[arr[i]%3]++;
        }
        if(sum%3==0) cout<<0<<endl;
        else if(sum%3==2) cout<<1<<endl;
        else if(sum%3==1 && mp[1]>0) cout<<1<<endl;
        else cout<<2<<endl;
    }

    return 0;
}
