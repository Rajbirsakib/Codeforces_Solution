#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=="Tetrahedron") count=count+4;
        if(s[i]=="Cube") count=count+6;
        if(s[i]=="Octahedron") count=count+8;
        if(s[i]=="Dodecahedron") count=count+12;
        if(s[i]=="Icosahedron") count=count+20;
    }
    cout<<count<<endl;

    return 0;
}
