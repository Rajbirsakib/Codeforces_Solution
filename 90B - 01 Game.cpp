#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') a++;
            else b++;
        }
        if((min(a,b)%2)==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }

    return 0;
}
