#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if((m*a)<=b) cout<<n*a<<endl;
    else{
        int mn=min((n%m)*a,b);
        cout<<mn+((n/m)*b)<<endl;
    }
    return 0;
}
