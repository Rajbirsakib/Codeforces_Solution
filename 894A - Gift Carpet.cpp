#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        char c[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }
        string s="vika";
        int count=0;
        for(int j=0;j<m && count<4;j++){
            int found=0;
            for(int i=0;i<n;i++){
                if(c[i][j]==s[count]){
                    found=1; break;
                }
            }
        if(found) count++;
        }
        if(count==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
