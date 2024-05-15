#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int len;
    cin>>a;
    int x=0, y=0, z=0;
    for(int i=0; i<a.length(); i++){
        if(a[i]=='1'){
            x++;
            y=0;
        }
        else{
            y++;
            x=0;
        }
        if(x==7 || y==7){
            z=1;
        }
    }
    if(z==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
