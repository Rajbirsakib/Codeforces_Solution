#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int k=c/2;
        a=a+c-k;
        b=b+k;
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
