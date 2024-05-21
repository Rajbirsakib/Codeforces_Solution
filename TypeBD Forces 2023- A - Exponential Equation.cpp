#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        if(t%2) cout<<-1<<endl;
        else cout<<"1 "<<t/2<<endl;
    }
    return 0;
}
