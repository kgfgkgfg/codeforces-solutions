#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		bool ans=false;
		string s2=to_string(b),s;
		cin>>s;
		int n=s.size();
		for(int i=0;i<n;i++){
			if(s[i]-'0'<=b){
				s.insert(i,s2);
				ans=true;break;
			}
		}
		if(ans==false)s.insert(n,s2);
		cout<<s<<endl;
	}
}