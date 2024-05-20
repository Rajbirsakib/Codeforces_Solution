#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string s= "hello";
    int x=0,y=0;
    for(int i=0; i<a.length(); i++){
        if(a[i]==s[x]){
            x++;
            y++;
        }
    }
    if(y==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
