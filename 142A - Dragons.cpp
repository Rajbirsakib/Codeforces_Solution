#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int b[10000];
void sort(int arr[],int n){
    int key,j,k;
    for(int i=1;i<n;i++){
        key=arr[i]; k=b[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            b[j+1]=b[j];
            j=j-1;
        }
        arr[j+1]=key;
        b[j+1]=k;
    }
}
int main(){
    int s,n;
    cin>>s>>n;
    for(int i=0;i<n;i++) cin>>arr[i]>>b[i];
    sort(arr,n);
    for(int i=0;i<n;i++){
        if(s>arr[i]) s=s+b[i];
        else{
            cout<<"NO"<<endl; return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
