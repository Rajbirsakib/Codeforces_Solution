#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i,a=0;
    int x=s.length();
    sort(s.begin(),s.end());
    for(i=0;i<x;i++){
        if(s[i]!=s[i+1]){
            a++;
        }
    }
    if(a%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
