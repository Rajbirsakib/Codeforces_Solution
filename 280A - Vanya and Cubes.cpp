#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=0;
    while(b<=n){
        a=a+1;
        b=b+((a*(a+1))/2);
    }
    cout<<a-1;

    return 0;
}
