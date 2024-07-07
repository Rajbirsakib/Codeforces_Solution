#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,arr[100],n;
    cin>>t;
    while(t--){
        cin>>n;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) x=x+arr[i];
            else y=y+arr[i];
        }
        if(x>y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
