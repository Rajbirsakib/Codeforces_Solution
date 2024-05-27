#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,arr[100];
    float avg=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        avg=avg+arr[i];
    }
    cout<<(avg/n)<<endl;;

    return 0;
}
