#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int a1=a+b*c;
    int a2=a*(b+c);
    int a3=a*b*c;
    int a4=(a+b)*c;
    int a5=a+b+c;
    int a6=(a*b)+c;
    int answer=max(a6,max(a5,max(a4,max(a3,max(a1,a2)))));
    cout<<answer<<endl;
    return 0;
}
