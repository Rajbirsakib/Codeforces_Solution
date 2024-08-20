#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        if(n%2!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++) s=s+"AAB";
            cout<<s<<endl;
        }
    }

    return 0;
}
