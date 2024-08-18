#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(s<=rev){
            if(n%2==0) cout<<s<<endl;
            else cout<<s<<rev<<endl;
        }
        else{
            if(n%2!=0) cout<<rev<<endl;
            else cout<<rev<<s<<endl;
        }
    }

    return 0;
}
