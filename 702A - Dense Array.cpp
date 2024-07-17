#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            int a=max(arr[i],arr[i+1]);
            int b=min(arr[i],arr[i+1]);
            while(b*2<a){
                ans++;
                b=b*2;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
