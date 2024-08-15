#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        long long a=-1,b=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                if(a==-1) a=i;
                b=i;
            }
        }
        cout<<b-a+1<<endl;
    }

    return 0;
}
