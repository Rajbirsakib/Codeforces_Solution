#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n); sort(b,b+n,greater<int>());

        ll sum=0,count=0;
        for(int i=0;i<n;i++){
            if(b[i]>a[i] && count!=k){
                swap(b[i],a[i]);
                count++;
            }
        }
        for(int i=0;i<n;i++) sum=sum+a[i];
        cout<<sum<<endl;
    }

    return 0;
}
