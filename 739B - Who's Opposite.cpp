#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int diff=abs(a-b);
        int ans=diff*2;
        if(a>ans ||b>ans||c>ans) cout<<-1<<endl;
        else{
            int d=diff+c;
            if(d>ans) d=c-diff;
            cout<<d<<endl;
        }
    }
    return 0;
}
