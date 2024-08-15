#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=1;
    cin>>n;
    while(count*5<n){
        n=n-(count*5);
        count=count*2;
    }
    string names[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cout<<names[(n-1)/count]<<endl;

    return 0;
}
