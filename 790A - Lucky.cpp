#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1=sum1+s[i];
        }
        for(int i=3;i<6;i++){
            sum2=sum2+s[i];
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
