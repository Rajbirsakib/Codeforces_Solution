#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        for(int j=0;j<n+m;j++){
            int x=pow(i,2)+j;
            int y=pow(j,2)+i;
            if(x==n && y==m) count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
