#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        set<char>arr;
        for(int i=0;i<s1.size();i++) arr.insert(s1[i]);
        for(int i=0;i<s2.size();i++) arr.insert(s2[i]);

        cout<<arr.size()-1<<endl;
    }

    return 0;
}
