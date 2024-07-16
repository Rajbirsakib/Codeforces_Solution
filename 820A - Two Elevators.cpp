#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        int ans1=abs(a-1);
        int ans2=abs(b-c)+(c-1);
        if(ans1>ans2) cout<<2<<endl;
        else if(ans1<ans2) cout<<1<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
