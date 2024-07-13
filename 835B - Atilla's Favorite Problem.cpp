#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        char c=*max_element(s.begin(),s.end());
        cout<<(c-'a'+1)<<endl;
    }
    return 0;
}
