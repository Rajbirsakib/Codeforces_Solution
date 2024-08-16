#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=26;i++){
            for(int j=1;j<=26;j++){
                for(int k=1;k<=26;k++){
                    if(i+j+k==n){
                        a=i; b=j; c=k;
                    }
                }
            }
        }
        cout<<char(96+c)<<char(96+b)<<char(96+a);
        cout<<endl;
    }

    return 0;
}
