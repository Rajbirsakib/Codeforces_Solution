#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%2==0 && b%2==0) cout<<"Yes"<<endl;
        else if(a%2!=0 && b%2!=0) cout<<"No"<<endl;
        else{
            long long x=0,y=0;
            if(a%2==0) x=a; else x=b;
            if(a%2==0) y=b; else y=a;
            if(x/2==y) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }

    return 0;
}
