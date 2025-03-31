#include<bits/stdc++.h>
using namespace std;
int a[1000005];
	int n,m;
int check(int k)
{
	int l=0,r=n+1;
	while(l+1<r){
		int mid=(l+r)/2;
		if(k>a[mid])l=mid;
		//l mid  r
		else r=mid;
	}
	return (a[r]==k?r:-1);
}
int main()
{

	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		int q;
		cin>>q;
		int ans=check(q);
		cout<<ans<<" ";
	}
	return 0;
 } 
