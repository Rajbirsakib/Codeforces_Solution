#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int p=0,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            p=p+arr[i];
        }
        else{
            if(p<1){
                c++;
            }
            else{
                p--;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
