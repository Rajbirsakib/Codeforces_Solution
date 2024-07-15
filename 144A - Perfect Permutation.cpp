#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        int arr[n];
        for(int i=1;i<=n;i++){
            arr[i]=i;
        }
        for(int i=1;i<=n-1;i++){
            swap(arr[i],arr[i+1]);
            i++;
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else cout<<"-1"<<endl;

    return 0;
}
