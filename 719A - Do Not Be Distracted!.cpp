#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++){
    		if(s[i]!=s[i+1]) arr[s[i]-65]++;
		}
		int count=0;
		for(int i=0;i<26;i++){
			if(arr[i]>1){
				count=1; break;
			}
		}
		if(count==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }

    return 0;
}
