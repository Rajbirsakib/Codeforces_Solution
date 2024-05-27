#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; string n;
    cin>>t;
    while(t--){
        cin>>n;
        string temp="314159265358979323846264338327";
        int res=0;
        for(int i=0;i<n.length();i++){
            if(n[i]==temp[i]) res++;

            else break;
            }
            cout<<res<<endl;
    }
    return 0;
}
