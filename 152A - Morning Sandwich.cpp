#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,b,c,h;
    cin>>t;
    while(t--){
        cin>>b>>c>>h;
        if(c+h>=b) cout<<b+(b-1)<<endl;
        else cout<<(c+h)+((c+h)+1)<<endl;
    }

    return 0;
}
