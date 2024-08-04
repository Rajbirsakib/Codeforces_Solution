#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0;
    while(a<s.size()){
        if(s[a]=='.'){
            cout<<0;
            a++;
        }
        if(s[a]=='-' && s[a+1]=='.'){
            cout<<1;
            a=a+2;
        }
        if(s[a]=='-' && s[a+1]=='-'){
            cout<<2;
            a=a+2;
        }
    }
    return 0;
}
