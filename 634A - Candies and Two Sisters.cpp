#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    long long n[t];
    for(int i=0;i<t;i++){
        cin>>n[i];
        if(n[i]==1 || n[i]==2) cout<<"0"<<endl;
        else if(n[i]%2==0) cout<<(n[i]-1)/2<<endl;
        else cout<<(n[i]/2)<<endl;
    }

    return 0;
}
