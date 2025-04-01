//homework7


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
// 
//#define N 5005
//int a[N], b[N], c[N], lc = 1;
////f(n-2) f(n-1) f(n)
//void add() {
//	int carry = 0;
//	//处理c
//	for (int i = 0; i < lc; i++) {
//		c[i] = a[i] + b[i] + carry;
//		carry = c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//	if (carry > 0) {
//		c[lc] = carry;
//		lc++;
//	}
//	//处理a,b
//	for (int i = 0; i < lc; i++) {
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//}
// 
//int main() {
//	int n;
//	scanf("%d", &n);
// 
//	a[0] = 1;
//	b[0] = 1;
//	if (n == 1 || n == 0)
//		printf("%d", 1);
//	else {
//		for (int i = 2; i <= n; i++) {
//			add();//多次循环调用来更新a和b的值 
//		}
//		for (int i = lc - 1; i >= 0; i--)
//			printf("%d", c[i]);
//	}
// 
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;                              //ans1 
//const int N=5005;
//int a[N],b[N],c[N];
//int lenc=1,n;
//void add()
//{
//	memset(c,0,sizeof(c));//每次调用add ，将a、b两个大数相加，并更新a，b的值 
//	//这样的话c只是工具人 
//	for(int i=0;i<lenc;i++){
////		cout<<c[i]<<" "<<c[i+1]<<" "; 
//		c[i]+=a[i]+b[i];
////		c[i+1]+=c[i]/10;
//		if(c[i]/10)c[i+1]++;
//		c[i]%=10; 
//
////		cout<<a[i]<<'+'<<b[i]<<"="<<c[i]<<" "<<c[i+1]<<endl;        
//	}
//	if(c[lenc]){
//		lenc++;
//	}
//	for(int i=0;i<lenc;i++){
//		a[i]=b[i];
//		b[i]=c[i];
//	}
//}
//int main()
//{
//	cin>>n;
//	a[0]=1;
//	b[0]=1;
//	if(n==1||n==0)cout<<1;
//	else{
//		for(int i=2;i<=n;i++){
//			add();
//		}
//		for(int i=lenc-1;i>=0;i--){
//			cout<<c[i];
//		}
//	}
//	
//	return 0;
// } 






//#include<bits/stdc++.h>
//using namespace std;                                //ans2
//const int N=5005;
//int a[N],b[N],c[N];
//int lenc=1,n;
//void add()
//{
//	//1 1 2 3 5 
//	int carry = 0;
//	//处理c
//	for (int i = 0; i < lenc; i++) {
//          每次都从0开始 
//		c[i] = a[i] + b[i] + carry;//避免了c[i]中原有初始值的影响 
//		carry = c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//	if (carry > 0) {
//		c[lenc] = carry;
//		lenc++;
//	}
//	for(int i=0;i<lenc;i++){
//		a[i]=b[i];
//		b[i]=c[i];
//	}
//}
//int main()
//{
//	cin>>n;
//	a[0]=1;
//	b[0]=1;
//	if(n==1||n==0)cout<<1;
//	else{
//		for(int i=2;i<=n;i++){
//			add();
//		}
//		for(int i=lenc-1;i>=0;i--){
//			cout<<c[i];
//		}
//	}
//	
//	return 0;
// } 





//#include<bits/stdc++.h>                      //ans3
//using namespace std;
//const int MAXN=5001;
//int f[MAXN][MAXN];
//int n,len=1;
////内联函数（inline function）是C++中用于提高函数执行效率的一种技术。
////通过在函数声明或定义前加上inline关键字，
////编译器会尝试将函数体内的代码直接嵌入到每个调用点，从而减少函数调用的开销
//inline void dt(int k)
//{
//	for(int i=1;i<=len;i++){
//		f[k][i]=f[k-1][i]+f[k-2][i];//每一项的计算独立并且基于之前已经保存好的项 
//	}
//	for(int i=1;i<=len;i++){
//		f[k][i+1]+=f[k][i]/10;
//		f[k][i]%=10;
//		if(f[k][len+1])len++;
//	}
//}
//int main()
//{
//	int n;
//	cin>>n;
//	f[1][1]=1,f[2][1]=2;//二维数组能保存每一项的结果，而前面两种没有专门保存，只是在计算中不断迭代ab的值 
//	for(int i=3;i<=n;i++){
//		dt(i);
//	}
//	for(int i=len;i>=1;i--){
//		cout<<f[n][i];
//	}
//	return 0;
//}






//#include<bits/stdc++.h>                //ans4
//using namespace std;
//const int MAXN=5001;
//int f[MAXN][MAXN];
//int len=1;
//inline void dt(int k)
//{
//	for(int i=1;i<=len;i++){
//		f[k][i]+=f[k-1][i]+f[k-2][i];  //注意如果要一起处理的话是+= 
//		f[k][i+1]+=f[k][i]/10;
//		f[k][i]%=10;
//	}
//	if(f[k][len+1])len++;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	f[1][1]=1;
//	f[2][1]=2;
//	for(int i=3;i<=n;i++){
//		dt(i);
//	}
//	for(int i=len;i>=1;i--){
//		cout<<f[n][i];
//	}
//	return 0;
// } 





//#include<bits/stdc++.h>                          //ans5 
//using namespace std;
//const int MAXN = 5001;
//int f[MAXN][MAXN];
//int n,len=1;
//inline void dt(int k){
//	for(int i=1;i<=len;i++){	
//		f[k][i]=f[k-1][i]+f[k-2][i];	
//	}	
//	for(int i=1;i<=len;i++){	
//		f[k][i+1]+=f[k][i]/10;		
//		f[k][i]%=10;		
//		if(f[k][len+1]) len++;	
//	}
//}
//int main()
//{
//	int n;	
//	cin>>n;	
//	f[1][1]=1,f[2][1]=2;	
//	for(int i=3;i<=n;i++){	
//		dt(i);	
//	}	
//	for(int i=len;i>=1;i--){	
//		cout<<f[n][i];	
//	}	
//	return 0;
//}






//B - 昆虫繁殖


//#include<bits/stdc++.h>                 //ans1
//using namespace std;
//int x,y,z;
//long long a[55],b[55];//记得用long long 
////指数级增长，int类型存储范围有限，无法承受这种快速增长的数值存储需求，很快就会溢出
////而long long类型能容纳更大数值，防止计算过程中因数值超出范围导致错误结果 
//int main()
//{
//	cin>>x>>y>>z;
//	for(int i=1;i<=x;i++){
//		a[i]=1;
//		b[i]=0;
//	}
//	for(int i=x+1;i<=z+1;i++){
//		b[i]=y*a[i-x];
//		//过x个月产卵 
//		a[i]=a[i-1]+b[i-2];
//	//继承上一个月的  卵过俩个月变成成虫 
//	}
//	cout<<a[z+1];
//	
//	return 0;
//}




//#include<iostream>                 //ans2 
//#include<cstdio>
//using namespace std;
//int x,y,z;
//long long a[55],b[55];
//int main()
//{
//	scanf("%d%d%d",&x,&y,&z);    
//	for(int i=1;i<=x;i++)      
//	a[i]=1,b[i]=0;    
//	for(int i=x+1;i<=z+1;i++)    
//	{    
//		b[i]=y*a[i-x];        
//		a[i]=a[i-1]+b[i-2];   
//	}     
//	printf("%lld\n",a[z+1]);
//}




//C - 位数问题


//#include<bits/stdc++.h>
//using namespace std;
//int a[1005],b[1005]; 
//int main()
//{
//	int n;
//	cin>>n;
//	a[1]=1;//第一位是3   奇数次 
//	b[1]=8;//第一位不是3   偶数次 
//	for(int i=2;i<=n;i++){
//		b[i]=(b[i-1]*9+a[i-1])%12345;
////偶数次=之前偶数+这一次不是3    之前奇数+这一次是3
//		a[i]=(a[i-1]*9+b[i-1])%12345; 
//	} 
//	cout<<b[n];
//	return 0;
//}



//#include<cstdio>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, n;
//	int a[1050], b[1050];
//	a[1] = 1, b[1] = 8;
//	for(i = 2; i < 1050; i++){
//		b[i] = (b[i - 1] * 9 + a[i - 1]) % 12345; //偶数
//		a[i] = (a[i - 1] * 9 + b[i - 1]) % 12345; //奇数
//	}
//	while(scanf("%d", &n) != EOF && n){
//		printf("%d\n", b[n]);
//	}
//	return 0;
//}





//D - 过河卒

//#include<bits/stdc++.h>
//using namespace std;
//int n,m,x,y;
//int dx[8]={2,1,-1,-2,-2,-1,1,2},
//	dy[8]={1,2,2,1,-1,-2,-2,-1};
//bool s[40][40];
//long long f[40][40];
//虽然只有20个格子，但本题的结果数据很大
//int main()
//{
//	cin>>n>>m>>x>>y;
//	n+=2,m+=2,x+=2,y+=2;//+2防止数组越界 
//	s[x][y]=1;
//	f[2][1]=1;//记得初始化 
//	for(int i=0;i<8;i++){
//		s[x+dx[i]][y+dy[i]]=1;
//	}
//	for(int i=2;i<=n;i++){
//		for(int j=2;j<=m;j++){
//			if(s[i][j])continue;
//			f[i][j]=f[i-1][j]+f[i][j-1];
//		}
//	}
//	cout<<f[n][m];
//	return 0;
//}




//#include <bits/stdc++.h>                     //dp动态规划
//#define ll long long
//using namespace std;
//
//const int N = 25;
//ll dp[N][N];  // 不开 long long 见祖宗 
//bool hasBlock[N][N];  // hasBlock[i][j] 为true,表示该位置被马控制了，不能走 
//
//// 计算不能走的区域(本题为马的控制区域)
//void cmp(int x, int y, int n, int m) 
//{
//    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
//    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
//    hasBlock[x][y] = true;  // 马本身的坐标屏蔽 
//    for (int i = 0; i < 8; i++) 
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)   
//            hasBlock[nx][ny] = true;  // 马控制的8个区域不能走 
//    }
//}
//
//int main() 
//{
//    int n, m, x, y;
//    scanf("%d %d %d %d", &n, &m, &x, &y);
//    cmp(x, y, n, m);   // 先标记所有不能走的区域 
//
//    memset(dp, 0, sizeof(dp));
//	
//    dp[0][0] = 1;  // 初始化第一个 
//    for(int j = 1; j <= m; j++)  
//        if(!hasBlock[0][j])  dp[0][j] = dp[0][j-1];  // 初始化第一行 ，因为只能从左边走过来 
//    //                     j从0开始，是因为这里是j-1 
//    for(int i = 1; i <= n; i++)  
//        if(!hasBlock[i][0])  dp[i][0] = dp[i-1][0];  // 初始化第一列 ，因为只能从上面走过来 
//    
//    for (int i = 1; i <= n; i++) 
//        for (int j = 1; j <= m; j++) 
//            if (!hasBlock[i][j]) 
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];  // 状态转移方程
//
//    cout << dp[n][m] << endl;
//    return 0;
//}





//#include <bits/stdc++.h>                     //dfs深搜
//#define ll long long
//using namespace std;
//
//const int N = 25;
//int n, m, x, y; 
//ll f[N][N];  // 不开 long long 见祖宗; f[i][j] 表示从(i, j)走到(n, m)需要的步数 
//bool hasBlock[N][N] = {0}; // 标记已访问的点
//
//// 深度优先搜索函数
//ll dfs(int x, int y)     // 此处要用到dfs的返回值，不开 long long 见祖宗 
//{
//    if(f[x][y] != 0)  return f[x][y];   // 记忆化搜索。算过的就不要再算了 
//	
//    if(x == n && y == m) // 如果到了终点，就返回1，表示有一种方案 
//        return 1;
//
//    if(hasBlock[x][y] || x > n || y > m) // 遇到不可行的点，返回0，表示无方案 
//        return 0;
//
//    // 本题只能向右和向下，不存在回路，所以不需要visit数组标记是否访问过 
//    f[x][y] = dfs(x + 1, y) + dfs(x, y + 1); // 向下移动 +向右移动
//    return f[x][y];
//}
//
//void cmp(int x, int y, int n, int m) 
//{
//    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
//    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
//    hasBlock[x][y] = true;  // 马本身的坐标屏蔽 
//    for (int i = 0; i < 8; i++) 
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)   
//            hasBlock[nx][ny] = true;  // 马控制的8个区域不能走 
//    }
//}
//
//// dfs
//int main() 
//{
//    scanf("%d %d %d %d", &n, &m, &x, &y);
//    cmp(x, y, n, m);   // 计算不能走的区域 
//    memset(f, 0, sizeof(f));  // 初始化 
//	
//    cout << dfs(0, 0);
//    return 0;
//}





//#include <bits/stdc++.h>              //bfs广搜
//#define ll long long
//using namespace std;
//
//typedef pair<int, int> PII;
//const int N = 25;
//
//int n, m;
//ll f[N][N];  // 不开 long long 见祖宗 ; f[i][j] 表示从(0, 0)走到(i, j)的方案数 
//bool hasBlock[N][N] = {0}; // 标记已访问的点
//bool vis[N][N];  // vis[i][j]=true表示坐标(i, j)已经在队列中。用于控制同一个坐标不要重复出现在队列里 
//
//// 深度优先搜索函数
//void bfs(int a, int b)     // 此处要用到dfs的返回值，不开 long long 见祖宗 
//{
//    int dx[] = {1, 0};  // 向右和向下的移动方向
//    int dy[] = {0, 1};
//	
//    queue<PII> q;
//    f[0][0] = 1;  // 初始化，从(0, 0)走到(0, 0)有1种方案 
//    vis[0][0] = true;
//    q.push({0, 0});
//
//    while (!q.empty()) 
//    {
//        PII u = q.front();
//        q.pop();
//        
//        int x = u.first;
//        int y = u.second;
//
//        for (int i = 0; i < 2; i++) 
//        {   // 只能向右和向下
//            int nx = x + dx[i], ny = y + dy[i];
//            if (nx >= 0 && nx <= n && ny >= 0 && ny <= m && !hasBlock[nx][ny]) 
//            {
//                if (vis[nx][ny] == false) // 如果下一个坐标还没入队列 
//                {
//                    vis[nx][ny] = true; 
//                    f[nx][ny] = f[x][y];  // 则走到当前坐标的方案数就是走到下一个坐标的方案数 
//                    q.push({nx, ny});     // 将下一个坐标入队列 
//                } 
//                else 
//                    f[nx][ny] += f[x][y]; // 如果下一个坐标已经在队列中，则不重复入队列，但是需累加当前坐标的方案数
//            }
//        }
//    }	
//}
//
//void cmp(int x, int y, int n, int m) 
//{
//    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
//    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
//    hasBlock[x][y] = true;  // 马本身的坐标屏蔽 
//    for (int i = 0; i < 8; i++) 
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)   
//            hasBlock[nx][ny] = true;  // 马控制的8个区域不能走 
//    }
//}
//
//// bfs
//int main() 
//{
//    int x, y;
//    scanf("%d %d %d %d", &n, &m, &x, &y);
//    cmp(x, y, n, m);   // 计算不能走的区域 
//    memset(f, 0, sizeof(f));  // 初始化 
//	
//    bfs(0, 0);
//    cout << f[n][m];
//    return 0;
//}




//E - 数的计算

//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int f[1005];
//int solve(int x){
//	int ans=1;
////不同次的solve函数调用，它们各自的ans变量是独立的，互不干扰 
////比如在计算solve(4)时：
////先ans被初始化为1，然后通过循环依次调用solve(1)和solve(2)。
////在调用solve(1)时，solve(1)函数内部的ans也被初始化为1，由于满足递归终止条件直接返回 1，这个1被累加到 solve(4)函数内部的ans上。
////当调用solve(2)时，solve(2)内部的ans同样初始化为1，再经过其内部的循环计算和递归调用等操作得到一个结果，也累加到solve(4)的ans上。
//	if(x==1)return 1;
//	if(f[x])return f[x]; //记忆化搜索 
//	for(int i=1;i<=x/2;i++){
//		ans+=solve(i);
//		//对1~x/2的每个数i，递归调用 solve(i)，返回以i开头的合法数列个数 
//	} 
//	f[x]=ans;//注意放在for循环外面，计算以x开头的合法数列个数 
//	//return ans;
//	return f[x];
//}
//int main()
//{
//	cin>>n;
//	cout<<solve(n);
//	return 0;
// } 





//F - 放苹果


//#include<bits/stdc++.h>
//using namespace std;
//int t,m,n;
//int apple(int m,int n){//m是苹果数，n是盘子数 
//	if(m==0||m==1||n==1){//边界：当苹果只有一个或者没有苹果时或者盘子只有一个时，只有一种放法，所以达到边界，返回值；
//		return 1;
//	}
//	if(m<n){//当苹果数少于盘子数，就只有m个盘子作用，所以接下来就计算m个苹果和m个盘子；
//		return apple(m,m);
//	}
//	if(m>=n){//如果苹果数大于等于盘子数，分成两个部分，一种是目前所有的盘子都放一个苹果，另一种是拿一个盘子不放；
//		return apple(m-n,n)+apple(m,n-1);
//	}
//}
////apple(m,n-1)可以理解为我有的盘子可以不放，但是为什么不是n-1 +n-2 +n-3。。呢？？？
////因为apple(m,n-1)里面包含了以上的情况了那么apple(m-n,n)代表我都放一个（这样不存在不放的），
////至于后面的情况，就回到递归了
////如果m=5,n=3  就变成了apple(2,3)  = apple(2,2)  相当于变成了一个新的更小规模的情况了
//
//int main()
//{
//	cin>>t;
//	while(t--){
//		cin>>m>>n;
//		int sum=apple(m,n);
//		cout<<sum<<endl;
//	}
//	return 0;
//}




//G - 外星密码


//#include<bits/stdc++.h>
//using namespace std;
////void solve(s){
////	len=s.length();
////	for(int i=0;i<len;i++){
////		if(s[i]>='A'&&s[i]<='Z')cout<<s[i];
////		if(s[i]=='['){
////			
////		}
////	}
////}
////这样不太好写哇，'['后的数字，后面连接的字符等等 
//string solve(){
//	string s,x;
//	char c;
//	int cnt;
//	while(cin>>c){
//		if(c=='['){
//			cin>>cnt;
//			x=solve();//solve返回的几个字符全部给x了 
//			while(cnt--)s+=x;
//		}
//		else if(c==']')return s;//在这里结束，return 
//		else s+=c;
//	}
//	return s;
//} 
//int main()
//{
//	//cin>>s;//这里就不用输入啦 
//	cout<<solve()<<endl;
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;
void solve(int x,int k){
//需要处理的数   在二进制的第几位上
	if(x==0)return ;//结束条件
	solve(x/2,k+1);
	if(x%2==1){
		if(x!=1)cout<<'+';
		if(k==0)cout<<"2(0)";
		else if(k==1)cout<<2;
		else{
			cout<<"2(";
			solve(k,0);
			cout<<')';
		}
	} 
}
int main()
{
	int n;
	cin>>n;
	solve(n,0);
	return 0;
}




















 
