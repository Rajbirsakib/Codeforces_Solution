#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res1=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++){
        int n1=s1[i]-'0';
        int n2=s2[i]-'0';
        int res=0;
        if(n1<n2){
            res=n1;
            res=res+(9-n2);
            res++;
        }
        else{
            res=9-n1;
            res=res+n2;
            res++;
        }
        if((abs(n1-n2))>res) res1=res1+res;
        else res1=res1+(abs(n1-n2));
    }
    cout<<res1<<endl;
    return 0;
}
