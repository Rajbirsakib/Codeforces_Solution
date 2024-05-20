#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'){
            continue;
        }
        else{
            s[i]=towlower(s[i]);
        }
        cout<<"."<<s[i];
    }
    return 0;
}
