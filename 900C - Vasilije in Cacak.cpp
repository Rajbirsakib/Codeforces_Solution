#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k,x;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        long long min=k*(k+1)/2;
        long long max=(n*(n+1)/2)-((n-k)*((n-k)+1)/2);
        if(x<min || x>max) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}
