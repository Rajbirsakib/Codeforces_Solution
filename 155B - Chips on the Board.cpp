#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],brr[n];
        long long s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s1=s1+arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
            s2=s2+brr[i];
        }
        sort(arr,arr+n); sort(brr,brr+n);
        cout<<min(s1+brr[0]*n,s2+arr[0]*n)<<endl;
    }

    return 0;
}
