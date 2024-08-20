#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int h=stoi(s.substr(0,2));
        string m=s.substr(3,2);
        string shift=" AM";
        if(h>11) shift=" PM";
        if(h==0 || h==12) cout<<12<<":"<<m<<shift<<endl;
        else{
            if(h%12<10) cout<<0<<h%12<<":"<<m<<shift<<endl;
            else cout<<h%12<<":"<<m<<shift<<endl;
        }
    }

    return 0;
}
