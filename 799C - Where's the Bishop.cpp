#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        char s[9][9];
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin>>s[i][j];
            }
        }
        ll x=0,y=0;
        for(int i=2;i<=7;i++){
            for(int j=2;j<=7;j++){
                if(s[i][j]=='#'){
                    if(s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#'){
                        x=i; y=j;
                    }
                }
            }
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
