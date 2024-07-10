#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a>b) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
