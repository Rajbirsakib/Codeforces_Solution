#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    int count=0;
    for(int i=0;i<n;i++){
        char c; long long d;
        cin>>c>>d;
        if(c=='+') x=x+d;
        else{
            if(d<=x) x=x-d;
            else count++;
        }
    }
    cout<<x<<" "<<count<<endl;
    return 0;
}
