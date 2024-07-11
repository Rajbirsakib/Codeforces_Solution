#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>c;
        if(m>c) ans++;
        else if(m<c) ans--;
    }
    if(ans==0) cout<<"Friendship is magic!^^"<<endl;
    else if(ans>0) cout<<"Mishka"<<endl;
    else cout<<"Chris"<<endl;

    return 0;
}
