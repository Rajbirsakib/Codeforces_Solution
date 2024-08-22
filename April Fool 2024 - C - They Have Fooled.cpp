#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    if(n==0 || n==1) cout<<10<<endl;
    else if(n==3 || n==10) cout<<9<<endl;
    else if(n==5 || n==6 || n==7 || n==8) cout<<7<<endl;
    else if(n==4 || n==12 || n==2) cout<<8<<endl;
    else if(n==9) cout<<0<<endl;
    else cout<<6<<endl;

    return 0;
}
