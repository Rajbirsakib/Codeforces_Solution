#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s,a,b;
        cin>>s;
        int count=0;
        a=a+s[0];
        for(int j=1;j<s.size();j++){
            if(s[j]!='0'|| count){
                b=b+s[j];
                count=1;
            }
            else a=a+s[j];
        }
        if(b.size()==0) b=b+'0';
        int n=stoi(a),m=stoi(b);
        if(m>n && m!=0 && n!=0) cout<<n<<" "<<m<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
