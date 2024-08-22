#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll arr[n]; arr[0]=0;
    for(int i=1;i<=n;i++){
        arr[i]=i; arr[i]=arr[i]*5;
    }
    ll count=0,cnt=k;
    for(int i=1;i<=n;i++){
        if(cnt<=240){
            cnt=cnt+arr[i];
            if(cnt>240) break;
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
