#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a;
    cin>>x;
    a=x%5;
    if(a==0){
        int n=x/5;
        cout<<n;
    }
    else{
        int m=(x/5)+1;
        cout<<m;
    }
    return 0;
}
