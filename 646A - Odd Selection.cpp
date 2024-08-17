#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int arr[n],odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0) odd++;
            else even++;
        }
        if(odd==0) cout<<"NO"<<endl;
        else{
            x--; odd--;
            while(x>0){
                if(odd>=2 && x>=2) odd=odd-2, x=x-2;
                else if(even!=0) even--,x--;
                else break;
            }
            if(x==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
