#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=1;
    for(int i=1;i<s.size();i++){
        if(s[i]>=97){
            count=0; break;
        }
    }
    if(count!=0){
        for(int i=0;i<s.size();i++){
            if(s[i]>=97) s[i]=s[i]-32;
            else s[i]=s[i]+32;
        }
        cout<<s<<endl;
    }
    else cout<<s<<endl;

    return 0;
}
