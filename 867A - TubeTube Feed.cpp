#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,n,t,a[100],b[100];
    cin>>q;
    while(q--){
        cin>>n>>t;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int A=-1,B=0;
        for(int i=0;i<n;i++){
            if(a[i]+i<=t){
                if(b[i]>B){
                    A=i+1; B=b[i];
                }
            }
        }
        cout<<A<<endl;
    }
    return 0;
}
