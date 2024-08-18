#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long n=s.size(), ans=-1;
		if((s[n-1]-'0')%2==0) ans=0;
		else if((s[0]-'0')%2==0) ans=1;
		else{
			long long count=0;
			for(int i=0;i<n;i++){
				if((s[i]-'0')%2==0){
					count=1; break; }
			}
			if(count==1) ans = 2;
		}
		cout<<ans<<endl;
	}

    return 0;
}

