#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a=0,b=0,c=0;
    cin>>n;
    if(n<0){
        a=n%10;
        b=n/10;
        c=(b-(b%10))+a;
        cout<<max(b,c)<<endl;
    }
    else cout<<n<<endl;

    return 0;
}
