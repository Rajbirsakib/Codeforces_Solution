#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        long long count=0;
        count=a;
        count+=b/3;
        b=b%3;
        if((b+c)<3 && b>0){
            cout<<-1<<endl; continue;
        }
        count+=(b+c)/3;
        if((b+c)%3) count++;
        cout<<count<<endl;
    }

    return 0;
}
