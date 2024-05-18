#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,mini=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        total=b-a+total;
        if(mini<total){
        mini=total;
        }
    }
    cout<<mini;
    return 0;
}
