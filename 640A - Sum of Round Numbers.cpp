#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long count=0,m;
        for(int i=0,m=n;m;i++){
            if(m%10) count++;
            m=m/10;
        }
        cout<<count<<endl;

        for(int i=0;n;i++){
            if(n%10) cout<<(n%10)*pow(10,i)<<" ";
            n=n/10;
        }
        cout<<endl;
    }

    return 0;
}
