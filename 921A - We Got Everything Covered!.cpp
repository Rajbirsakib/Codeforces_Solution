#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s,s1;
        char c='a';
        for(int i=0;i<k;i++){
            s+=c;
            c++;
        }
        for(int i=0;i<n;i++){
            s1+=s;
        }
        cout<<s1<<endl;
    }

    return 0;
}
