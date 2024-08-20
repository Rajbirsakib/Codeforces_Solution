#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int b[n],c[m];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        long long count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]+c[j]<=k) count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
