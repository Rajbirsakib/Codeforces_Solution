#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        int x=0,y=0;
        char c1,c2;
        for(int i=0;i<a.size();i++){
            if(a[i]!='X') c1=a[i];
            else x++;
        }
        for(int i=0;i<b.size();i++){
            if(b[i]!='X') c2=b[i];
            else y++;
        }
        if(c1==c2){
            if(x==y || c1=='M') {cout<<"="<<endl; continue;}
            if(c1=='S'){
                if(x>y) cout<<"<"<<endl;
                else cout<<">"<<endl;

            }
            else if(c1=='L'){
                if(x>y) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            continue;
        }
        if(c1=='S') cout<<"<"<<endl;
        else if(c1=='M' && c2=='S') cout<<">"<<endl;
        else if(c1=='M' && c2=='L') cout<<"<"<<endl;
        if(c1=='L') cout<<">"<<endl;
    }

    return 0;
}
