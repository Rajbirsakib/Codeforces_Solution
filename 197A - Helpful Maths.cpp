#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i=i+2){
        for(int j=0;j<n-1;j=j+2){
            if(s[j]>s[j+2]) swap(s[j],s[j+2]);
        }
    }
    cout<<s<<endl;
    return 0;
}
