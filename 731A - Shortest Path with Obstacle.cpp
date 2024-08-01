#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,x1,y1,x2,y2,x3,y3,ans=0;
    cin>>t;
    while(t--){
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        ans=abs(x1-x2)+abs(y1-y2);
        if(y1==y2 && y2==y3 && y3==y1){
            if(x3>=min(x1,x2) && x3<=max(x1,x2)) ans=ans+2;
        }
        else if(x1==x2 && x2==x3 && x3==x1){
            if(y3>=min(y1,y2) && y3<=max(y1,y2)) ans=ans+2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
