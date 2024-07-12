#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        int x=0,count=0;
        for(int i=1;i<=n;i++){
            cin>>a>>b;
            if(a<=10){
                if(b>x){
                    x=b;
                    count=i;
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
