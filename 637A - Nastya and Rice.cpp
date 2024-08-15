#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
        if((a+b)*n<(c-d) || (a-b)*n>(c+d)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}
