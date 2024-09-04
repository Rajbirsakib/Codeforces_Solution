#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<s.size();j++){
                if(s[j]=='#'){
                    arr[i]=j+1; break;
                }
            }
        }
        for(int i=n-1;i>=0;i--) cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}
