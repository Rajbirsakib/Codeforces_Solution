#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int count=0;
        for(int i=0;i<=6;i++){
            if(x.find(s)!=-1){
                count=1;
                cout<<i<<endl; break;
            }
            x+=x;
        }
        if(!count) cout<<-1<<endl;
    }

    return 0;
}
