#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    int x,y;
    while(t--){
        cin>>x>>y;
        int y1=(y+1)/2;
        int rc=y1*15-y*4;
        int rc1=max(0,x-rc);
        int rc2=(rc1+14)/15;
        cout<<rc2+y1<<endl;
    }

    return 0;
}
