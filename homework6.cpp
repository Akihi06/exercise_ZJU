//homework6


//A - 统计方形（数据加强版）

////枚举一个点 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long int n,m;     //注意数据，用long long int 
//	cin>>n>>m;
//	long long int zcnt=0,sum=0;
////	int minn=0;
//	for(long long int i=0;i<=n;i++){//注意是从0开始而不是从1开始（通过样例） 
//		for(long long int j=0;j<=m;j++){
//			zcnt+=min(i,j)+min(n-i,j)+min(i,m-j)+min(n-i,m-j);//一个点向四个方向发散 
//			sum+=i*j+(n-i)*j+i*(m-j)+(n-i)*(m-j);//这里加起来其实就是n*m 
//			//ccnt+=n*m-zcnt;
//		}
//	}
//	sum/=4,zcnt/=4;
//	long long int ccnt=sum-zcnt;
//	cout<<zcnt<<" "<<ccnt;
//	return 0;
//}




//枚举右下角

//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	int n,m;
//	cin>>n>>m;
//	ll ans1=0,ans2=0;
//	for(int x=0;x<=n;i++){
//		for(int y=0;y<=m;j++){
//			ans1+=min(x,y);
//			ans2+=m*n-ans1;
//		}
//	}
//	cout<<ans1<<" "<<ans2;
//	
//	return 0;
// } 


////枚举边长
//
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	int n,m,ans1=0,ans2=0;	
//	cin>>n>>m;	
//	for(int x=1;x<=n;x++){	
//		for(int y=1;y<=m;y++){		
//			if(x==y) ans1+=(n-x+1)*(m-y+1);	//选一个角开始（比如左上角），向下、向右发散
//			//+1是这道题中决定的，起始位置这一行		
//			else ans2+=(n-x+1)*(m-y+1);	
//		}	
//	}	
//	cout<<ans1<<" "<<ans2<<endl;
//	
//	return 0;
// } 




////排列组合确定矩阵数量（横线*2，竖线*2）
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n,m,ans=0;
//	ll tot=n*(n+1)*m*(m+1)/4;//找两个横线，两个竖线
//	for(ll a=1;a<=min(m,n);a++){
//		ans+=(n-a+1)*(m-a+1);
//	}
//	cout<<ans<<" "<<tot-ans<<endl;
//	return 0;
// } 





//B - 烤鸡


//#include<bits/stdc++.h>
//using namespace std;
//#define rep(i,a,b) for(int i=a;i<=b;i++)
////根据字典序，且3^10是不会超时的，接10个循环
//int main()
//{
//	int n,ans=0;	
//	cin>>n;	
//	if(n>30) 
//	cout<<0<<endl,exit(0);	
//	rep(a,1,3) rep(b,1,3) rep(c,1,3) rep(d,1,3) rep(e,1,3)	rep(f,1,3) rep(g,1,3) rep(h,1,3) rep(i,1,3) rep(j,1,3)	if(a+b+c+d+e+f+g+h+i+j==n) ++ans;
//	cout<<ans<<endl;	
//	rep(a,1,3) rep(b,1,3) rep(c,1,3) rep(d,1,3) rep(e,1,3)	rep(f,1,3) rep(g,1,3) rep(h,1,3) rep(i,1,3) rep(j,1,3)	if(a+b+c+d+e+f+g+h+i+j==n)
//	{			
//		printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);		
//	}	
//	return 0;
//}




//C - 三连击（升级版）

//#include<bits/stdc++.h>
//using namespace std;
//int a,b,c;
//int flag[15];
//bool check(int temp)
//{
//	memset(flag,0,sizeof(flag));
//	//a:b:c
//	int x=temp,y=x*b/a,z=x*c/a;//看比例式啦 
//	if(y>999||z>999)return false;
//	while(x){
//		flag[x%10]++;
//		x/=10;
//	}
//	while(y){
//		flag[y%10]++;
//		y/=10;
//	}
//	while(z){
//		flag[z%10]++;
//		z/=10;
//	}
//	for(int i=1;i<=9;i++){
//		if(flag[i]!=1)return false;
//	}
//	return true;
// } 
//
//int main()
//{
//	bool flag=false;
//	cin>>a>>b>>c;
//	if(a==0||b==0||c==0)cout<<"No!!!"<<endl,exit(0);
//	for(int i=123;i<=987;i++){
//		if(i*b%a==0&&i*c%a==0){
//			if(check(i)){
//				cout<<i<<" "<<i*b/a<<" "<<i*c/a<<endl;
//				flag=true;
//			}
//
//		}	
//	}
//	if(!flag)cout<<"No!!!"<<endl;
//	return 0;
//}






//D - 铺地毯

//#include<bits/stdc++.h>
//using namespace std;
//int a[100005],b[100005],g[100005],k[100005];
//int main()
//{
//	int n;
//	cin>>n;
////	int a,b,g,k;
//	int x,y;
//	for(int i=1;i<=n;i++){
//		cin>>a[i]>>b[i]>>g[i]>>k[i];
//	}
//	cin>>x>>y;
//	for(int i=n;i>=1;i--){
//		if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i]){
//			cout<<i<<endl;
//			exit(0);
//		}
//	}
//	cout<<-1<<endl;
//	return 0;
//}




////E - 山峰暸望
//
//
//#include<bits/stdc++.h>
//using namespace std;
//long long int a[10005];
//int main()
//{
//	int n;
//	int l,r;
//	int ans=0;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(int i=1;i<=n;i++){
//		l=i,r=i;
//		while(a[l-1]<=a[l]&&l>1)l--;
//		while(a[r+1]<=a[r]&&r<n)r++;  //对于每个点都计算，反正最大答案会覆盖 
//		ans=max(ans,r-l+1);
//	//	while(a[i-1]<=a[i])l--;
//	//	while(a[i+1]>=)
//	}
//	cout<<ans<<endl;
//	return 0;
// } 




//F - 回文日期


//#include<bits/stdc++.h>
//using namespace std;
//int s[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
////如果是闰年，我们需要去考虑多出来的情况，也就是2月29日，
////反过来就是9220年（而这一年是闰年），所以闰年不用特殊处理 
//int main()
//{
//	int a,x; 
//	int ans=0;
//	int m,n;
//	cin>>m>>n;
//	for(int i=1;i<=12;i++){  //月 12
//		for(int j=1;j<=s[i];j++){//日 3
//		 	a=(j%10)*1000+(j/10)*100+(i%10)*10+(i/10);
//		 //	1203>>3021
//		 	x=a*10000+i*100+j;      //直接把日期算出来 
//		 	if(x<m||x>n)continue;
//		 	ans++;
//		}
//	}
//	cout<<ans;
//	return 0;
// } 






//G - 选数

//#include<bits/stdc++.h>         //从n个选择k个，递归 
//using namespace std;
//int n,k;
//long long int a[25],ans=0;
//bool check(int x)
//{
//	if(x==0||x==1)return false;
//	for(int i=2;i*i<=x;i++){
//		if(x%i==0)return false;
//	}
//	return true;
//}
//void dfs(int qs,int cnt,int sum) //记得void 毕竟return ； 
//{
//	if((k-cnt+qs)>n)return ;
////k-cnt剩余需要的数字个数 
////k-cnt+qs表示从当前起始位置qs开始，要选够k个数字，需要覆盖的范围
////比如，k==5，已经选了两个数字（cnt==2），当前起始位置qs==4，5-2+4=7，如果n==6，要选够k个数字需要遍历到第7个位置 
//	if(cnt==k){
//		if(check(sum))++ans;
//		return ;
//	}
//	for(int i=qs+1;i<=n;i++){//qs表示当前搜索的起始位置 
//		dfs(i,cnt+1,sum+a[i]);
//	}
//	return ;
// } 
// //1 2 3 4
// //递归每次返回都只返回一层，一层！！！！这样就可以达到遍历的效果 
//int main()
//{
//	
//	cin>>n>>k;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	dfs(0,0,0);
//	cout<<ans<<endl;
//	
//	return 0;
// } 







//#include<bits/stdc++.h>
//using namespace std;
//int n,k;
//int a[25],ans=0;
//bool check(int x){
//	if(x==0||x==1)return false;
//	for(int i=2;i*i<=x;i++){
//		if(x%i==0)return false;
//	}
//	return true;
//}
//void dfs(int qs,int cnt,int sum){
//	//结束条件
//	if(k-cnt+qs>n)return ;
//	if(k==cnt){
//		if(check(sum))ans++;
//		return ;
//	} 
//	for(int i=qs+1;i<=n;i++){
//		dfs(i,cnt+1,sum+a[i]);
//	}
//}
//int main()
//{
//	cin>>n>>k;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	dfs(0,0,0);
//	cout<<ans<<endl;
//	return 0;
// } 






//H - 组合的输出



//#include<bits/stdc++.h>//n个里抽r个，dfs 
//using namespace std;
//int n,r;
//int a[105];
//void solve(int qs,int k)
////当前搜索的起始位置  已经选了k个元素 
//{
//	if(k==r+1){
//		for(int i=1;i<=r;i++){//k从1开始，因为传入 solve(0,1);
//			printf("%3d",a[i]);
//		}
//		cout<<endl;
//		return ;
//	}
//	for(int i=qs+1;i<=n;i++){
//		a[k]=i;//选的第k个数 
//		solve(i,k+1);
//	}
//}
//
//int main()
//{
//	cin>>n>>r;
//	solve(0,1);
//	return 0;
//}




//I - 全排列问题



//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[1005]; 
////void dfs(int qs,int )//不对哇，递归要一直往后走 
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		a[i]=i;
//	}
//	do{
//		for(int i=1;i<=n;i++){
//			printf("%5d",a[i]);
//		}
//		cout<<endl;
//	}while(next_permutation(a+1,a+n+1));
//	//函数：next_permutation(start,end)
//	//作用：在表示[start,end)内存的数组中产生严格的下一个字典序排列
//	//next_permutation是C++标准库<algorithm>中的一个函数，作用是将一个范围内的元素排列成下一个字典序的排列 
//	return 0;
// } 






//J - 火星人


//#include<bits/stdc++.h>
//using namespace std;
//int a[10050];
//int main()
//{
//	int n,m;	
//	cin>>n>>m;	
//	for(int i=1;i<=n;i++) cin>>a[i];
//	//所以所谓火星人给的数就是几个排列的序号，科学家给的小数是改变字典序的次数 
//	while(m--){	
//		next_permutation(a+1,a+n+1);	
//	}	
//	for(int i=1;i<=n;i++) cout<<a[i]<<" ";	
//	return 0;
//}



//#include <bits/stdc++.h>//万能头文件
//#include <iostream>//无聊多打几个头文件
//#include <cmath>//无聊多打几个头文件
//#include <cstring>//无聊多打几个头文件
//int a[101010];//输入数组
//using namespace std;
//int main()//代码开始
//{
//	int n;//有n个数
//	cin>>n;//读入n
//	int x;//第x种排序
//	cin>>x;//读入x
//	for(int i=0;i<n;++i) cin>>a[i];//循环读入数组
//	while(x--)//查找第x种排序
//	{
//		next_permutation(a+0,a+n);//全排列函数
//	}
//	for(int i=0;i<n;++i){
//		cout<<a[i];//循环输出
//		if(i!=n-1) cout<<" ";//如不是最后一个输出空格
//	}
//	return 0;//愉快的结束了
//}


        
//#include <bits/stdc++.h>//万能头文件                       //搜索做 
//#include <iostream>//无聊多打几个头文件
//#include <cmath>//无聊多打几个头文件
//#include <cstring>//无聊多打几个头文件
//using namespace std;
//int n;
//int per[10];
//bool vis[10];
//void dfs(int num)
//{
//	if(num==n+1)
//	{
//		for(int i=1;i<=n;++i)
//		{
//			cout<<setw(5)<<per[i];
//		}
//		cout<<endl;
//		return ;
//	}
//	for(int i=1;i<=n;++i)
//	{
//		if(vis[i]==false)
//		{
//			vis[i]=true;
//			per[num]=i;
//			dfs(num+1);
//			vis[i]=false;
//		}
//	}
//}
//int main()//代码开始
//{
//	cin>>n;
//	dfs(1);
//	return 0;//愉快的结束了
//}






//K - 涂条纹



//#include<bits/stdc++.h>
//using namespace std;
////int s[55][5];
////int ans=0x2f2f2f;
//int ans=0x2f2f2f,anss,q,s[51][4];
//
//int main()
//{
//	int n,m,a,b,c;
////	int n,m,a,b,c,q,anss;
//	cin>>n>>m;
//	string x;
//	for(int i=1;i<=n;i++){
//		cin>>x; //直接输入一排
//		a=b=c=0;//注意在这里清理！！！！！！！！！！！！！！ 
//		for(int j=0;j<m;j++){
//		//这一排从0开始 
//			if(x[j]=='W') a++;//白 
//			if(x[j]=='B') b++;//蓝 
//			if(x[j]=='R') c++;//红 
//		}
//		s[i][1]=m-a;//全涂成白色 
//		s[i][2]=m-b;//全涂成蓝色 
//		s[i][3]=m-c;//全涂成红色 
//	}
//	q=s[1][1]+s[n][3];
////	cout<<s[1][1]<<' '<<s[n][3]<<endl;
//	for(int i=2;i<=n-1;i++){
//		for(int j=i;j<=n-1;j++){
//			anss=0;
//			for(int k=i;k<=j;k++)anss+=s[k][2];
//			for(int k=i-1;k>=2;k--)anss+=s[k][1];
//			for(int k=j+1;k<=n-1;k++)anss+=s[k][3];
//			ans=min(ans,anss);
//		}
//	} 
////	cout<<q<<endl;
//	cout<<ans+q;
//	return 0;
// } 


//4 5
//WRWRW
//BWRWB
//WRWRW
//RWBWR

//#include<bits/stdc++.h>
//using namespace std;
//int s[55][5],ans=0x2f2f2f,anss,q;
//int main()
//{
//	int n,m,a,b,c;
//	cin>>n>>m;
//	string x;
//	for(int i=1;i<=n;i++){
//		cin>>x;                //注意在哪里输入！！！！！！！！！！ 
//		a=b=c=0;
//		for(int j=0;j<m;j++){
//			if(x[j]=='W')a++;
//			if(x[j]=='B')b++;
//			if(x[j]=='R')c++;
//		}
//		s[i][1]=m-a;
//		s[i][2]=m-b;
//		s[i][3]=m-c;
//	}
//	//2~i-1
//	//i~j
//	//j+1~n-1
//	q=s[1][1]+s[n][3];
//	for(int i=2;i<=n-1;i++){
//		for(int j=i;j<=n-1;j++){
//			anss=0;
//			for(int k=i;k<=j;k++)anss+=s[k][2];
//			for(int k=i-1;k>=2;k--)anss+=s[k][1];
//			for(int k=j+1;k<=n-1;k++)anss+=s[k][3];
//			ans=min(ans,anss); 
//		}
//	}
//	cout<<q+ans;
//	return 0;
// } 









//L - 火柴棒等式


////当n=24的时候，纯数字20根，那么小于四位（因为1111 要8根）那枚举0~1000就行
//#include<bits/stdc++.h>
//using namespace std;
//int cnt[10]={6,2,5,5,4,5,6,3,7,6};
//int matches(int num){
//	int i,k=0;
//	for(i=num;i!=0;i/=10)k+=cnt[i%10];
//	if(num==0)k+=6;
//	return k;
//}
//int main()
//{
//	int n,sum=0;
//	cin>>n;
//	for(int i=0;i<=1000;i++){
//		for(int j=0;j<=1000;j++){
//			if(matches(i)+matches(j)+matches(i+j)+4==n)
//				sum++;
//		}
//	}
//	cout<<sum<<endl;
//	
//	return 0;
// } 





//M - PERKET


//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int s[15],b[15];
//int ans=2e9;
//void dfs(int cnt,int x,int y)
//{
//	if(cnt>n){
//		if(x==1&&y==0)return ;
//		ans=min(ans,abs(x-y));
//		return ;
//	}
//	dfs(cnt+1,x*s[cnt],y+b[cnt]);//加 
//	dfs(cnt+1,x,y);//不加 (不选择当前选择的第cnt个元素)                       //学一下这里 
//	//通过这两种递归调用，代码可以遍历所有选择或不选择每个元素的组合情况 
// } 
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>s[i]>>b[i];
//	}
//	dfs(1,1,0);
//	cout<<ans;
//	return 0;
//}





//N - 小 Y 拼木棒


#include<bits/stdc++.h>
using namespace std;
#define C(a) ((a)*((a)-1)/2)  //组合数 
const int mod=1e9+7;
int main()
{
	int n,pail[100005]={0},cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int tmp;
		cin>>tmp;
		pail[tmp]++;
	}
	for(int a=2;a<=5000;a++)
	{
		for(int c=1;c<=a/2;c++)
		{
			int d=a-c;
			if(d==c&&pail[a]>=2&&pail[c]>=2){ //  2/4相等 
				cnt+=(C(pail[a]%mod)*C(pail[c]%mod))%mod;
			}
			else if(d!=c&&pail[a]>=2&&pail[c]&&pail[d]){//  2/4不相等 
				cnt+=(C(pail[a]%mod)*(pail[c]%mod)*(pail[d]%mod))%mod;
			}
			cnt%=mod;
		}
	}
	cout<<cnt%mod;
	return 0;
 } 



























