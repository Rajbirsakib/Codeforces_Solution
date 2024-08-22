#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        ll two=0,count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2) two++;
        }
        if(two%2!=0) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                if(arr[i]==2) count++;
                if(count==two/2) { cout<<i+1<<endl; break;}
            }
        }
    }

    return 0;
}

