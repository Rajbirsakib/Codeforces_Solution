#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s,s1="abcdefgh";
    while(t--){
        cin>>s;
        char c=s[0];
        int n=s[1]-'0';
        for(int i=0;i<8;i++){
            if(s1[i]!=c) cout<<s1[i]<<n<<endl;
        }
        for(int i=1;i<=8;i++){
            if(n!=i) cout<<c<<i<<endl;
        }

    }
    return 0;
}
