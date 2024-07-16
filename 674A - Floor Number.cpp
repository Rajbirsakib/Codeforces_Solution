#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        n=n-2;
        int count=1;
        while(n>=1){
            n=n-x;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
