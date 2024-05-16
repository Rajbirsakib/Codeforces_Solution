#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxi=0,mini=101,ma=0,mi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maxi){
            maxi=arr[i];
            ma=i;
        }
        if(arr[i]<=mini){
            mini=arr[i];
            mi=i;
        }
    }
    if(ma>mi){
        mi++;
    }
    cout<<ma+(n-1)-mi;
    return 0;
}
