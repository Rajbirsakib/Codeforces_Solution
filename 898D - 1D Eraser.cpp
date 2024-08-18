#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        long long count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                count++;
                i+=k-1;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
