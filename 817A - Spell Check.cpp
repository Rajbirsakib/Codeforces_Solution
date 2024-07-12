#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string s="Timur", s1;
    while(t--){
        cin>>n;
        cin>>s1;
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        if(s==s1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
