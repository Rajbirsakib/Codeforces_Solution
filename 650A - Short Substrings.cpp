#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i=i+2){
            cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    }

    return 0;
}
