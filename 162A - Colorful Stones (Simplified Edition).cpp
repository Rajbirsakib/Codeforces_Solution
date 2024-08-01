#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    cin>>s>>t;
    int count=1,j=0;
    for(int i=0;i<t.size();i++){
        if(s[j]==t[i]){
            count++;
            j++;
        }
    }
    cout<<count<<endl;

    return 0;
}
