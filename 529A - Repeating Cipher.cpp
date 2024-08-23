#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    string s,s1;
    cin>>s;
    ll count=2;
    for(int i=0;i<n;){
        cout<<s.at(i);
        i+=count;
        count++;
    }
    cout<<endl;

    return 0;
}
