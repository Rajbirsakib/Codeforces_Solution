#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,w,h,n;
    cin>>t;
    while(t--){
        cin>>w>>h>>n;
        long long count=w*h, ans=1;
        while(count%2!=1){
            count=count/2;
            ans=ans*2;
        }
        if(ans>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}

    return 0;
}
