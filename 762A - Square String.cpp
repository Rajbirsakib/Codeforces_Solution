#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,a,b;
        cin>>s;
        int n=s.size();
        if(n%2==0){
            for(int i=0;i<n/2;i++) a=a+s[i];
            for(int i=n/2;i<n;i++) b=b+s[i];
            if(a==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
