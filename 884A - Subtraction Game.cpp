#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>1){
            cout<<"1"<<endl;
            continue;
        }
        if(b>2){
            cout<<"2"<<endl;
            continue;
        }
        else cout<<"3"<<endl;

    }
    return 0;
}
