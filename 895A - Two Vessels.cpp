#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int dif=abs(a-b);
        if(a==b) cout<<"0"<<endl;
        else if(dif%(2*c)==0) cout<<dif/(2*c)<<endl;
        else cout<<(dif/(2*c))+1<<endl;
    }
    return 0;
}
