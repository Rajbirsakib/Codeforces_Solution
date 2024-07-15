#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    cin>>s;
    int a=0;
    if(c=='R') a=-1; else a=1;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s1.size();j++){
            if(s[i]==s1[j]){
                s[i]=s1[j+a];
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
