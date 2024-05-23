#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[3];
    cin>>n;
    while(n--){
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    cout<<arr[1]<<endl;
    }
    return 0;
}
