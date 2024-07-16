#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int f=pow(2,n);
        for(int i=1;i<n/2;i++) f=f+pow(2,i);
        int a=0;
        for(int i=n/2;i<n;i++) a=a+pow(2,i);
        int ans=f-a;
        cout<<ans<<endl;
    }
    return 0;
}
