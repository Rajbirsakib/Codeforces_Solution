#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        string a,s;
        cin>>a>>s;
        int arr[26];
        for(int i=0;i<a.size();i++){
            arr[a[i]-'a']=i;
        }
        int sum=0;
        for(int i=1;i<s.size();i++){
            sum=sum+abs(arr[s[i]-'a']-arr[s[i-1]-'a']);
        }
        cout<<sum<<endl;
    }

    return 0;
}
