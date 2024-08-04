#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(!(s[i]^'n')) cout<<1<<" ";
        if(!(s[i]^'z')) count++;
    }
    for(int i=0;i<count;i++) cout<<0<<" ";

    return 0;
}
