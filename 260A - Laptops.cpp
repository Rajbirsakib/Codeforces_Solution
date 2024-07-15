#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a<b) count++;
    }
    if(count>=1) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

    return 0;
}
