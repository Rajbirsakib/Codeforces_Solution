#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                if((((int)s[i])-48)<d){
                    cout<<d<<s[i];
                    count=1;
                }
                else cout<<s[i];
            }
            else cout<<s[i];
        }
        if(count==0) cout<<d;
        cout<<endl;
    }

    return 0;
}
