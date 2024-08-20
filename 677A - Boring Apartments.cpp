#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        long long ans=0;
        if(x.size()==1) ans=1;
        else if(x.size()==2) ans=3;
        else if(x.size()==3) ans=6;
        else ans=10;
        long long ans1=((x[0]-'0')-1)*10;
        cout<<ans+ans1<<endl;

    }

    return 0;
}

