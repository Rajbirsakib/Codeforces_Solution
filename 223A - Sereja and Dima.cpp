#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,d=0,l=0,r=n-1,z=0;
    while(l<=r){
        if(z%2==0){
            if(arr[l]>arr[r]){
                s=s+arr[l];
                l++;
            }
            else{
                s=s+arr[r];
                r--;
            }
        }
        else{
            if(arr[l]>arr[r]){
                d=d+arr[l];
                l++;
            }
            else{
                d=d+arr[r];
                r--;
            }
        }
        z++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
