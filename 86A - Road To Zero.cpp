#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>a>>b;
        long long count=0,mn=min(x,y);
        if(2*a>b){
            x=x-mn;
            y=y-mn;
            count=b*mn;
        }
        count=count+((x+y)*a);
        cout<<count<<endl;
    }
    return 0;
}
