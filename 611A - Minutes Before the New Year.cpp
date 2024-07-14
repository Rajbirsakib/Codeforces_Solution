#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,h,m;
    cin>>t;
    while(t--){
        cin>>h>>m;
        int ans=1440-((h*60)+m);
        cout<<ans<<endl;
    }
    return 0;
}

