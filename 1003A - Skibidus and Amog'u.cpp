#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string w;
        cin>>w;
        w=w.substr(0, w.size()-2)+"i";
        cout<<w<<endl;
    }

    return 0;
}
