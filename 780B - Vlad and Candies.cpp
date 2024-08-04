#include<bits/stdc++.h>
using namespace std;
int main(){
     long long t,n;
     cin>>t;
     while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(n==1){
            if(a[0]>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            long long ans=a[n-1]-a[n-2];
            if(ans>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
     }

    return 0;
}

