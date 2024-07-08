#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        set<string>ans;
        for(int i=0;i<n-1;i++){
            string s1="";
            s1=s1+s[i];
            s1=s1+s[i+1];
            ans.insert(s1);
        }
        cout<<ans.size()<<endl;
    }

    return 0;
}
