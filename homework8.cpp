//homework8

// A - 部分背包问题

//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	int m;
//	int v;
//	double s;
//}a[105];
//bool cmp(node x,node y){
//	return x.s>y.s;
//}
//int main()
//{
//	int n,t;
//	cin>>n>>t;
//	for(int i=1;i<=n;i++){
//		cin>>a[i].m>>a[i].v;
//		a[i].s=a[i].v*1.0/a[i].m;
//	}
//	sort(a+1,a+n+1,cmp);
//	double ans=0;
//	for(int i=1;i<=n;i++){
//		if(t>=a[i].m){
//			t-=a[i].m;
//			ans+=a[i].v;
//		}
//		else{
//			ans+=a[i].s*t;
//			break;
//		}
//	}
//	printf("%.2lf",ans);
//	return 0;
//}



//B - 排队接水

//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	int id;
//	int t;
//}a[1005];
//bool cmp(node x,node y)
//{
//	return x.t<y.t;
//}
//int main()
//{
//	int n;
//	double ans=0.0;//要用double不能用float 
//	//对于需要精确数值计算尤其是涉及到小数点后较多位数精确表示的情况，优先考虑使用double 
//	//float ans=0.0;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i].t;
//		a[i].id=i;
//	}
//	sort(a+1,a+n+1,cmp);
//	for(int i=1;i<=n;i++){
//		cout<<a[i].id<<" "; 
//		//ans+=(float)a[i].t*(n-i);
//		ans+=(double)a[i].t*(n-i);
//	}
//	cout<<endl;
//	//printf("%.2f",ans*1.0/n);
//	printf("%.2lf",ans*1.0/n);
//	return 0;
//}




////C - 凌乱的yyy / 线段覆盖
//
//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	int a,b;
//}s[1000005];
//bool cmp(node x,node y)
//{
//	return x.b<y.b;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>s[i].a>>s[i].b;
//	}
//	sort(s+1,s+n+1,cmp);
//	//int ans=0;
//	int ans=1;//注意第一个已经选了 
//	//这里“第一个“是已经排序后的第一个，即结束最早的 
//	int end=s[1].b;
//	for(int i=2;i<=n;i++){
//		if(s[i].a>=end){
//			end=s[i].b;
//			ans++;
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}



//D - 小A的糖果

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x;
	cin>>n>>x;
	long long a[100005];
	long long sum=0;
	cin>>a[1];
	if(a[1]>x){
		sum+=a[1]-x;
		a[1]=x;
	}
	
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(a[i]+a[i-1]>x){
			sum+=a[i]+a[i-1]-x;
			a[i]=x-a[i-1];
		}
	} 
	cout<<sum;
	return 0;
 } 
















