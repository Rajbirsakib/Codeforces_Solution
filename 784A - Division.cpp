#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(1900<=x){
            cout<<"Division 1"<<endl;}
        if(1600<=x && x<=1899){
            cout<<"Division 2"<<endl;}
        if(1400<=x && x<=1599){
            cout<<"Division 3"<<endl;}
        if(x<=1399){
            cout<<"Division 4"<<endl;}
    }
    return 0;
}
