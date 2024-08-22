#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,c,d;
    cin>>t;
    while(t--){
        cin>>n>>c>>d;
        int arr[n*n],brr[n*n];
        for(int i=0;i<n*n;i++) cin>>arr[i];
        sort(arr,arr+(n*n));
        brr[0]=arr[0];
        for(int i=1;i<n;i++) brr[i]=brr[i-1]+d;
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=i;j<n*n;j=j+n){
                brr[j]=brr[i]+c*k; k++;
            }
        }
        sort(brr,brr+(n*n));
        bool ans=true;
        for(int i=0;i<n*n;i++){
            if(arr[i]!=brr[i]){
                ans=false; break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
