#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T;cin>>T;
	while(T--){
		int n,x1,y1,x2,y2,ans=0;
		cin>>n>>x1>>y1>>x2>>y2;
		if(x1<x2) ans=max(ans,x2);
		if(x1>x2) ans=max(ans,n-x2);
		if(y1<y2) ans=max(ans,y2);
		if(y1>y2) ans=max(ans,n-y2);
		cout<<ans<<'\n';
	}
	return 0;
}