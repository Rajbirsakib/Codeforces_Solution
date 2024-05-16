#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i;i<s.length();i++){
        s[0]=towupper(s[0]);
    }
    cout<<s;
    return 0;
}
