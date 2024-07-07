#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,arr[1000],x=0,y=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]<=b) x++;
        else y=y+2;
    }
    cout<<x+y<<endl;
    return 0;
}
