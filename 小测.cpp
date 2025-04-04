////A
//#include<bits/stdc++.h>
//using namespace std;
//int n,m;
//struct node{
//	string name;
//	long long score; //用long long 
//}s[100010],h[100010];
//bool cmp(node x,node y){
//	return x.score>y.score;
//}
//int main()
//{
//	cin>>n>>m;
//	int cnt1=0,cnt2=0;
//	for(int i=1;i<=n+m;i++){
//		string ch;
//		char a;
//		long long x;//记得这里也要long long 
//		cin>>ch>>a>>x;
//		if(a=='S'){
//			s[++cnt1].name=ch;
//			s[cnt1].score=x;
//		}
//		else{
//			h[++cnt2].name=ch;
//			h[cnt2].score=x;
//		}
//	}
//	sort(s+1,s+n+1,cmp);
//	sort(h+1,h+m+1,cmp);
//	cout<<h[3].name<<endl;
//	for(int i=6;i<=9;i++){
//		cout<<s[i].name<<endl;
//	}
//	return 0;
// } 




//B
#include<bits/stdc++.h>
using namespace std;
string b = "ABCDEF"; 
int m;
void solve(int x)
{
	int ans=x%m;
	//if(x/m==0)return ;
	if(x==0)return ;
	solve(x/m);
	
//	cout<<(ans<10?ans:b[ans-10])<<endl;   
	//注意！！！！！！！！三目运算符的两个返回类型必须一致！！！！！！！！！！    
	if(ans<10){
		cout<<ans; 
	}
	else{
		cout<<b[ans-10];
	}
}
int main()
{
	int x;
	cin>>x>>m;
	solve(x);
	return 0;
}


//C


//#include<bits/stdc++.h>
//using namespace std;
//bool check(int x){
//	if(x==0||x==1)return false;
//	for(int i=2;i*i<=x;i++){
//		if(x%i==0)return false;
//	}
//	return true;
//}
//int n,k,ans=0;
//int a[25];
//void solve(int qs,int cnt,int sum)
//{
//	if(cnt==k){
//		if(check(sum))ans++;
//		return ;
//	}
//	if(k-cnt>n-qs)return ;
////	for(int i=1;i<=n;i++){
////		solve(qs+i,cnt+1,sum+a[i]);
//	for(int i=qs+1;i<=n;i++){//qs记录从谁开始的索引 
//		solve(i,cnt+1,sum+a[i]);
//	}
//}
//int main()
//{
//	cin>>n>>k;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	solve(0,0,0);
//	cout<<ans;
//	return 0;
// } 



//D

//#include<bits/stdc++.h>
//using namespace std;
//char a[1005][1005];
//int main()
//{
//	int n;
//	int ans=0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cin>>a[i][j];
//		}
//		getchar();
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(a[i][j]=='#'&&(a[i+1][j]=='.'||a[i-1][j]=='.'||a[i][j+1]=='.'||a[i][j-1]=='.'))
//			a[i][j]='.';
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(a[i][j]=='#')ans++;
//		}
//	}
//	cout<<ans;
//	return 0;
// } 





//#include<bits/stdc++.h>
//using namespace std;
//int dx[4]={-1,0,1,0},
//	dy[4]={0,1,0,-1};
//char a[1010][1010];
//bool s[1010][1010];//默认为false 
//int n;
//int aa,bb;
//void dfs(int x,int y){
//	s[x][y]=true;//标记访问过
//	aa++;
//	for(int i=0;i<4;i++){
//		int xx=x+dx[i],yy=y+dy[i];
//		if(a[xx][yy]=='.'){
//			bb++;
//			break;
//		}
//	} 
//	for(int i=0;i<4;i++){
//		int xx=x+dx[i],yy=y+dy[i];
//		if(xx<0||xx>=n||yy<0||yy>=n)continue;
//		if(a[xx][yy]=='#'&&!s[xx][yy]){
//			dfs(xx,yy);
//		}
//	} 
//}
//int main()
//{
//	cin>>n;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cin>>a[i][j];
//		}
//		getchar();
//	}
//	int ans=0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(a[i][j]=='#'&&!s[i][j]){
//				aa=0,bb=0;
//				dfs(i,j);
//				if(aa==bb)ans++;
//			}
//		}
//	}
//	cout<<ans;
//	return 0;
//}




////E
//
//#include<bits/stdc++.h>
//using namespace std;
//int a[30];
//int main()
//{
//	memset(a,0,sizeof(a));
//	char s;
//	int maxn=0;
//	while((s=getchar())!=EOF){
//		if(s>='A'&&s<='Z'){
//			a[s-'A']++;
//			maxn=max(maxn,a[s-'A']);
//		}
//		else continue;
//	}
//	for(int i=maxn;i>=1;i--){
//		for(int j=0;j<25;j++){
//			if(a[j]>=i){
//				cout<<'*'<<" ";
//			}
//			else{
//				cout<<"  ";
//			}
//		}
//		if(a[25]>=i)cout<<'*';
//		else cout<<" ";
//		cout<<endl;
//	}
//	cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
//	return 0;
// } 




//F

//#include<bits/stdc++.h>
//using namespace std;                 //80分 
//const long long MAXN=1000005;
////10^12
//long long a[MAXN];
//long long n;
//void solve(int x){
//	for(int i=1;i<=n;i++){
//		if(i%x==0){
//			if(a[i]==1)a[i]=0;
//			else a[i]=1;
//		}
//	}
//}
//int main()
//{	
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		a[i]=0;
//	}
//	for(int i=1;i<=n;i++){
//		solve(i);
//	}
//	for(int i=1;i<=n;i++){
//		if(a[i]==1)cout<<i<<" ";
//	}
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long int n, m;
//	cin >> n;
//	m = sqrt(n);
//	for(long long int i = 1; i <= m; i++)
//		cout << i * i << " ";
//	return 0;
//}



















