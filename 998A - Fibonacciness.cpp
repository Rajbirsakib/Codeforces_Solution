#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,a1,a2,a4,a5;
    cin>>t;
    while(t--){
        cin>>a1>>a2>>a4>>a5;
        ll arr[]= {a1+a2, a4-a2, a5-a4};
        sort(arr, arr+3);
        if(arr[0] == arr[2]) cout<<3<<endl;
        else if(arr[0]==arr[1] || arr[1]==arr[2]) cout<<2<<endl;
        else cout<<1<<endl;
    }

    return 0;
}
