#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int p=-1,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(p!=-1) r+=(i-p-1);
                p=i;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
