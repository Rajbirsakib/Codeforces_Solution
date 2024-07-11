#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,red=0,blue=0;
    cin>>a>>b;
    if(a>b) red=b;
    else red=a;

    blue=abs(a-b)/2;
    cout<<red<<" "<<blue;

    return 0;
}
