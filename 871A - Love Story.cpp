#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s0="codeforces";
    string s1;
    int t;
    cin>>t;
    while(t--){
        cin>>s1;
        int count=0;
        for(int i=0;i<10;i++){
            if(s1[i]!=s0[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
