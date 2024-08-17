#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a=0,b=0, count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==25) a++;
        else if(arr[i]==50){
            if(a>=1){ a--; b++;}
            else count=1;
        }
        else{
            if(a>=1 && b>=1){
                a--; b--;
            }
            else if(a>=3 && b==0) a=a-3;
            else count=1;
        }
    }
    if(count==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
