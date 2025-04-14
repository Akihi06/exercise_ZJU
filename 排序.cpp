////√∞≈›≈≈–Ú BubbleSort
//
//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN=100005;
//int a[MAXN];
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
////	int cnt=n;              //–¥∑®“ª 
////	while(cnt--){
////		for(int i=1;i<n;i++){     
////			if(a[i]>a[i+1])swap(a[i],a[i+1]);
////		}
////	}
//
//	for(int i=1;i<=n;i++){        //–¥∑®∂˛ 
//		for(int j=1;j<n;j++){
//			if(a[j]>a[j+1])swap(a[j],a[j+1]);
//		}
//	}
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
// } 



//—°‘Ò≈≈–Ú


#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int a[N];
int main()
{
	int n,maxn;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i]>a[j])swap(a[i],a[j]);
		}
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
} 


 
