#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    long long n,m,temp=0;
    cin>>n>>m;
    for(int i=n+1;i;i++){
        if(prime(i)){
            temp=i; break;
        }
    }
    if(temp==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
