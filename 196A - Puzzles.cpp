#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,diff=0,ans=0;
    cin>>n>>m;
    int f[m];
    for(int i=0;i<m;i++){
        cin>>f[i];
    }
    sort(f,f+m);
    ans=f[m-1]-f[0];
    for(int i=n;i<=m;i++){
        diff=abs(f[i-1]-f[i-n]);
        ans=min(ans,diff);
    }
    cout<<ans<<endl;

    return 0;
}
