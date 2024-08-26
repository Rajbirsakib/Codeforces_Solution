#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='3' && s[i]!='9') count=1;
    }

    if(count==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;
}
