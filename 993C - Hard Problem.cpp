#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,m,a,b,c;
    cin>>t;
    while(t--){
        cin>>m>>a>>b>>c;
        ll row= min(m,a)+min(m,b);
        ll rem=(2*m)-row;
        row+=min(rem,c);
        cout<<row<<endl;
    }

    return 0;
}
