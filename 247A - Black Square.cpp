#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,count=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') count=count+a;
        else if(s[i]=='2') count=count+b;
        else if(s[i]=='3') count=count+c;
        else count=count+d;
    }
    cout<<count<<endl;

    return 0;
}
