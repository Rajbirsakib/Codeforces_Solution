#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long a=0,b=0;
        for(int i=0;i<s.size();i++){
        if(s[i]=='A') a++;
        else b++;}
        if(a>b) cout<<"A"<<endl;
        else cout<<"B"<<endl;

    }

    return 0;
}
