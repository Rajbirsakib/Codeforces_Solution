#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') a++;
        else b++;
    }
    if(a==b) cout<<0<<endl;
    else if(a>b) cout<<a-b<<endl;
    else cout<<b-a<<endl;
    return 0;
}
