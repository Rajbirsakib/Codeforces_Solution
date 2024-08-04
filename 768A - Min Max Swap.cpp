#include<bits/stdc++.h>
using namespace std;
int main(){
     long long t,n;
     cin>>t;
     while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int mx1=0,mx2=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                mx1=max(mx1,b[i]);
                mx2=max(mx2,a[i]);
            }
            else{
                mx1=max(mx1,a[i]);
                mx2=max(mx2,b[i]);
            }
        }
        cout<<mx1*mx2<<endl;
     }
    return 0;
}
