#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        string s1="";
        for(int i=0;i<n;i++){
            s1=s1+s[i];
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    i=j;
                    break;
                }
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}
