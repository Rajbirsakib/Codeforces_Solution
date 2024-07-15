#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char a='a';
    int count=0;
    for(int i=0;i<s.size();i++){
        int x=min(abs(a-s[i]),26-abs(a-s[i]));
        a=s[i];
        count=count+x;
    }
    cout<<count<<endl;

    return 0;
}

