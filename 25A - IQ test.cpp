#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    int arr[n];
    ll even=0,odd=0,x=0,y=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){even++; x=i;}
        else {odd++; y=i;}
    }
    if(odd>even) cout<<x+1<<endl;
    else cout<<y+1<<endl;

    return 0;
}
