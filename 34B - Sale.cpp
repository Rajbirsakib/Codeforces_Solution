#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n;i++){
        if(m>0){
            if(arr[i]<0) count=count+(abs(arr[i]));
            m--;
        }
        if(m==0) break;
    }
    cout<<count<<endl;
    return 0;
}
