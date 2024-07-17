#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int count=1;
        for(int i=0;i<n;i++){
            cout<<count<<" ";
            count=count+2;
        }
        cout<<endl;
    }

    return 0;
}
