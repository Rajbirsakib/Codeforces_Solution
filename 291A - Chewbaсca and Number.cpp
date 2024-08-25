#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++){
        if(x[i]=='9' && i==0) x[i]=x[i];
        else if(x[i]>='5') x[i]='9'-x[i]+'0';

    }
    cout<<x<<endl;

    return 0;
}
