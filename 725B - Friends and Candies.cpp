#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        ll sum=0,count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if((sum%n)!=0) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                if((sum/n)<arr[i]) count++;
            }
            cout<<count<<endl;
        }
    }

    return 0;
}
