#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[100],count=0,s1=0,s2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s1=s1+arr[i];
    }
    s1=(s1/2);
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        s2=s2+arr[i];
        count++;
        if(s1<s2) break;
    }
    cout<<count<<endl;
    return 0;
}
