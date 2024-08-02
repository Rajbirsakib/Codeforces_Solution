#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>x;
        long long row=x%n;
        if(row==0) row=n;
        long long col=(x+n-1)/n;
        cout<<(row-1)*m+col<<endl;
    }
    return 0;
}
