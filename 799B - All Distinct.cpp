#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,arr;
    cin>>t;
    while(t--){
        cin>>n;
        set<long long>s;
        for(int i=0;i<n;i++){
            cin>>arr;
            s.insert(arr);
        }
        if((n-s.size())%2==0) cout<<s.size()<<endl;
        else cout<<s.size()-1<<endl;
    }
    return 0;
}
