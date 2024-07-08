#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,m,arr[100];
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s1=s1+arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr[i];
            s2=s2+arr[i];
        }
        if(s1>s2) cout<<"Tsondu"<<endl;
        else if(s1<s2) cout<<"Tenzing"<<endl;
        else cout<<"Draw"<<endl;
    }

    return 0;
}
