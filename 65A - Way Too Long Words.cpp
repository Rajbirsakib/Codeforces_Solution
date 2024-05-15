#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr;
        if(arr.size()<=10) cout<<arr<<endl;
        else cout<<arr[0]<<arr.size()-2<<arr[arr.size()-1]<<endl;
    }
    return 0;
}
