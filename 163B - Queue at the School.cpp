#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j]='G'; s[j+1]='B';
                j++;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}