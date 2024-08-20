#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if((s[i]=='p' && s[i+1]=='i' && s[i+2]=='e' )||(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')){
                count++; i=i+2;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
