#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            arr[i]++;
            int a=1;
            for(int j=0;j<n;j++){
                a=a*arr[j];
            }
            if(a>count) count=a; arr[i]--;
        }
        cout<<count<<endl;
    }

    return 0;
}
