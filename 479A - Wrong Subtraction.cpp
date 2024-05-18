#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    int k,i;
    cin>>a>>k;
    for(i=0;i<k;i++){
        if(a%10==0){
            a=a/10;
        }
        else{
            a--;
        }
    }
    cout<<a<<endl;
    return 0;
}
