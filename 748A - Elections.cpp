#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int x=0,y=0;
        if(a<=b) x=(b-a)+1;
        if(a<=c) y=(c-a)+1;
        cout<<max(x,y)<<" ";
        x=0,y=0;
        if(b<=a) x=(a-b)+1;
        if(b<=c) y=(c-b)+1;
        cout<<max(x,y)<<" ";
        x=0,y=0;
        if(c<=a) x=(a-c)+1;
        if(c<=b) y=(b-c)+1;
        cout<<max(x,y)<<" "<<endl;
    }

    return 0;
}
