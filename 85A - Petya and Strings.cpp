#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    if(a==b){
        cout<<"0";
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i]){
                cout<<"-1";
                break;
            }
            if(a[i]>b[i]){
                cout<<"1";
                break;
            }

        }
    }
    return 0;
}
