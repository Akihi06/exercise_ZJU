//homework7


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
// 
//#define N 5005
//int a[N], b[N], c[N], lc = 1;
////f(n-2) f(n-1) f(n)
//void add() {
//	int carry = 0;
//	//����c
//	for (int i = 0; i < lc; i++) {
//		c[i] = a[i] + b[i] + carry;
//		carry = c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//	if (carry > 0) {
//		c[lc] = carry;
//		lc++;
//	}
//	//����a,b
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
//			add();//���ѭ������������a��b��ֵ 
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
//	memset(c,0,sizeof(c));//ÿ�ε���add ����a��b����������ӣ�������a��b��ֵ 
//	//�����Ļ�cֻ�ǹ����� 
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
//	//����c
//	for (int i = 0; i < lenc; i++) {
//          ÿ�ζ���0��ʼ 
//		c[i] = a[i] + b[i] + carry;//������c[i]��ԭ�г�ʼֵ��Ӱ�� 
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
////����������inline function����C++��������ߺ���ִ��Ч�ʵ�һ�ּ�����
////ͨ���ں�����������ǰ����inline�ؼ��֣�
////�������᳢�Խ��������ڵĴ���ֱ��Ƕ�뵽ÿ�����õ㣬�Ӷ����ٺ������õĿ���
//inline void dt(int k)
//{
//	for(int i=1;i<=len;i++){
//		f[k][i]=f[k-1][i]+f[k-2][i];//ÿһ��ļ���������һ���֮ǰ�Ѿ�����õ��� 
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
//	f[1][1]=1,f[2][1]=2;//��ά�����ܱ���ÿһ��Ľ������ǰ������û��ר�ű��棬ֻ���ڼ����в��ϵ���ab��ֵ 
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
//		f[k][i]+=f[k-1][i]+f[k-2][i];  //ע�����Ҫһ����Ļ���+= 
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






//B - ���深ֳ


//#include<bits/stdc++.h>                 //ans1
//using namespace std;
//int x,y,z;
//long long a[55],b[55];//�ǵ���long long 
////ָ����������int���ʹ洢��Χ���ޣ��޷��������ֿ�����������ֵ�洢���󣬺ܿ�ͻ����
////��long long���������ɸ�����ֵ����ֹ�������������ֵ������Χ���´����� 
//int main()
//{
//	cin>>x>>y>>z;
//	for(int i=1;i<=x;i++){
//		a[i]=1;
//		b[i]=0;
//	}
//	for(int i=x+1;i<=z+1;i++){
//		b[i]=y*a[i-x];
//		//��x���²��� 
//		a[i]=a[i-1]+b[i-2];
//	//�̳���һ���µ�  �ѹ������±�ɳɳ� 
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




//C - λ������


//#include<bits/stdc++.h>
//using namespace std;
//int a[1005],b[1005]; 
//int main()
//{
//	int n;
//	cin>>n;
//	a[1]=1;//��һλ��3   ������ 
//	b[1]=8;//��һλ����3   ż���� 
//	for(int i=2;i<=n;i++){
//		b[i]=(b[i-1]*9+a[i-1])%12345;
////ż����=֮ǰż��+��һ�β���3    ֮ǰ����+��һ����3
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
//		b[i] = (b[i - 1] * 9 + a[i - 1]) % 12345; //ż��
//		a[i] = (a[i - 1] * 9 + b[i - 1]) % 12345; //����
//	}
//	while(scanf("%d", &n) != EOF && n){
//		printf("%d\n", b[n]);
//	}
//	return 0;
//}





//D - ������

//#include<bits/stdc++.h>
//using namespace std;
//int n,m,x,y;
//int dx[8]={2,1,-1,-2,-2,-1,1,2},
//	dy[8]={1,2,2,1,-1,-2,-2,-1};
//bool s[40][40];
//long long f[40][40];
//��Ȼֻ��20�����ӣ�������Ľ�����ݺܴ�
//int main()
//{
//	cin>>n>>m>>x>>y;
//	n+=2,m+=2,x+=2,y+=2;//+2��ֹ����Խ�� 
//	s[x][y]=1;
//	f[2][1]=1;//�ǵó�ʼ�� 
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




//#include <bits/stdc++.h>                     //dp��̬�滮
//#define ll long long
//using namespace std;
//
//const int N = 25;
//ll dp[N][N];  // ���� long long ������ 
//bool hasBlock[N][N];  // hasBlock[i][j] Ϊtrue,��ʾ��λ�ñ�������ˣ������� 
//
//// ���㲻���ߵ�����(����Ϊ��Ŀ�������)
//void cmp(int x, int y, int n, int m) 
//{
//    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
//    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
//    hasBlock[x][y] = true;  // ������������� 
//    for (int i = 0; i < 8; i++) 
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)   
//            hasBlock[nx][ny] = true;  // ����Ƶ�8���������� 
//    }
//}
//
//int main() 
//{
//    int n, m, x, y;
//    scanf("%d %d %d %d", &n, &m, &x, &y);
//    cmp(x, y, n, m);   // �ȱ�����в����ߵ����� 
//
//    memset(dp, 0, sizeof(dp));
//	
//    dp[0][0] = 1;  // ��ʼ����һ�� 
//    for(int j = 1; j <= m; j++)  
//        if(!hasBlock[0][j])  dp[0][j] = dp[0][j-1];  // ��ʼ����һ�� ����Ϊֻ�ܴ�����߹��� 
//    //                     j��0��ʼ������Ϊ������j-1 
//    for(int i = 1; i <= n; i++)  
//        if(!hasBlock[i][0])  dp[i][0] = dp[i-1][0];  // ��ʼ����һ�� ����Ϊֻ�ܴ������߹��� 
//    
//    for (int i = 1; i <= n; i++) 
//        for (int j = 1; j <= m; j++) 
//            if (!hasBlock[i][j]) 
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];  // ״̬ת�Ʒ���
//
//    cout << dp[n][m] << endl;
//    return 0;
//}





//#include <bits/stdc++.h>                     //dfs����
//#define ll long long
//using namespace std;
//
//const int N = 25;
//int n, m, x, y; 
//ll f[N][N];  // ���� long long ������; f[i][j] ��ʾ��(i, j)�ߵ�(n, m)��Ҫ�Ĳ��� 
//bool hasBlock[N][N] = {0}; // ����ѷ��ʵĵ�
//
//// ���������������
//ll dfs(int x, int y)     // �˴�Ҫ�õ�dfs�ķ���ֵ������ long long ������ 
//{
//    if(f[x][y] != 0)  return f[x][y];   // ���仯����������ľͲ�Ҫ������ 
//	
//    if(x == n && y == m) // ��������յ㣬�ͷ���1����ʾ��һ�ַ��� 
//        return 1;
//
//    if(hasBlock[x][y] || x > n || y > m) // ���������еĵ㣬����0����ʾ�޷��� 
//        return 0;
//
//    // ����ֻ�����Һ����£������ڻ�·�����Բ���Ҫvisit�������Ƿ���ʹ� 
//    f[x][y] = dfs(x + 1, y) + dfs(x, y + 1); // �����ƶ� +�����ƶ�
//    return f[x][y];
//}
//
//void cmp(int x, int y, int n, int m) 
//{
//    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
//    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
//    hasBlock[x][y] = true;  // ������������� 
//    for (int i = 0; i < 8; i++) 
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)   
//            hasBlock[nx][ny] = true;  // ����Ƶ�8���������� 
//    }
//}
//
//// dfs
//int main() 
//{
//    scanf("%d %d %d %d", &n, &m, &x, &y);
//    cmp(x, y, n, m);   // ���㲻���ߵ����� 
//    memset(f, 0, sizeof(f));  // ��ʼ�� 
//	
//    cout << dfs(0, 0);
//    return 0;
//}





//#include <bits/stdc++.h>              //bfs����
//#define ll long long
//using namespace std;
//
//typedef pair<int, int> PII;
//const int N = 25;
//
//int n, m;
//ll f[N][N];  // ���� long long ������ ; f[i][j] ��ʾ��(0, 0)�ߵ�(i, j)�ķ����� 
//bool hasBlock[N][N] = {0}; // ����ѷ��ʵĵ�
//bool vis[N][N];  // vis[i][j]=true��ʾ����(i, j)�Ѿ��ڶ����С����ڿ���ͬһ�����겻Ҫ�ظ������ڶ����� 
//
//// ���������������
//void bfs(int a, int b)     // �˴�Ҫ�õ�dfs�ķ���ֵ������ long long ������ 
//{
//    int dx[] = {1, 0};  // ���Һ����µ��ƶ�����
//    int dy[] = {0, 1};
//	
//    queue<PII> q;
//    f[0][0] = 1;  // ��ʼ������(0, 0)�ߵ�(0, 0)��1�ַ��� 
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
//        {   // ֻ�����Һ�����
//            int nx = x + dx[i], ny = y + dy[i];
//            if (nx >= 0 && nx <= n && ny >= 0 && ny <= m && !hasBlock[nx][ny]) 
//            {
//                if (vis[nx][ny] == false) // �����һ�����껹û����� 
//                {
//                    vis[nx][ny] = true; 
//                    f[nx][ny] = f[x][y];  // ���ߵ���ǰ����ķ����������ߵ���һ������ķ����� 
//                    q.push({nx, ny});     // ����һ����������� 
//                } 
//                else 
//                    f[nx][ny] += f[x][y]; // �����һ�������Ѿ��ڶ����У����ظ�����У��������ۼӵ�ǰ����ķ�����
//            }
//        }
//    }	
//}
//
//void cmp(int x, int y, int n, int m) 
//{
//    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
//    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
//    hasBlock[x][y] = true;  // ������������� 
//    for (int i = 0; i < 8; i++) 
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)   
//            hasBlock[nx][ny] = true;  // ����Ƶ�8���������� 
//    }
//}
//
//// bfs
//int main() 
//{
//    int x, y;
//    scanf("%d %d %d %d", &n, &m, &x, &y);
//    cmp(x, y, n, m);   // ���㲻���ߵ����� 
//    memset(f, 0, sizeof(f));  // ��ʼ�� 
//	
//    bfs(0, 0);
//    cout << f[n][m];
//    return 0;
//}




//E - ���ļ���

//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int f[1005];
//int solve(int x){
//	int ans=1;
////��ͬ�ε�solve�������ã����Ǹ��Ե�ans�����Ƕ����ģ��������� 
////�����ڼ���solve(4)ʱ��
////��ans����ʼ��Ϊ1��Ȼ��ͨ��ѭ�����ε���solve(1)��solve(2)��
////�ڵ���solve(1)ʱ��solve(1)�����ڲ���ansҲ����ʼ��Ϊ1����������ݹ���ֹ����ֱ�ӷ��� 1�����1���ۼӵ� solve(4)�����ڲ���ans�ϡ�
////������solve(2)ʱ��solve(2)�ڲ���ansͬ����ʼ��Ϊ1���پ������ڲ���ѭ������͵ݹ���õȲ����õ�һ�������Ҳ�ۼӵ�solve(4)��ans�ϡ�
//	if(x==1)return 1;
//	if(f[x])return f[x]; //���仯���� 
//	for(int i=1;i<=x/2;i++){
//		ans+=solve(i);
//		//��1~x/2��ÿ����i���ݹ���� solve(i)��������i��ͷ�ĺϷ����и��� 
//	} 
//	f[x]=ans;//ע�����forѭ�����棬������x��ͷ�ĺϷ����и��� 
//	//return ans;
//	return f[x];
//}
//int main()
//{
//	cin>>n;
//	cout<<solve(n);
//	return 0;
// } 





//F - ��ƻ��


//#include<bits/stdc++.h>
//using namespace std;
//int t,m,n;
//int apple(int m,int n){//m��ƻ������n�������� 
//	if(m==0||m==1||n==1){//�߽磺��ƻ��ֻ��һ������û��ƻ��ʱ��������ֻ��һ��ʱ��ֻ��һ�ַŷ������Դﵽ�߽磬����ֵ��
//		return 1;
//	}
//	if(m<n){//��ƻ������������������ֻ��m���������ã����Խ������ͼ���m��ƻ����m�����ӣ�
//		return apple(m,m);
//	}
//	if(m>=n){//���ƻ�������ڵ������������ֳ��������֣�һ����Ŀǰ���е����Ӷ���һ��ƻ������һ������һ�����Ӳ��ţ�
//		return apple(m-n,n)+apple(m,n-1);
//	}
//}
////apple(m,n-1)�������Ϊ���е����ӿ��Բ��ţ�����Ϊʲô����n-1 +n-2 +n-3�����أ�����
////��Ϊapple(m,n-1)������������ϵ��������ôapple(m-n,n)�����Ҷ���һ�������������ڲ��ŵģ���
////���ں����������ͻص��ݹ���
////���m=5,n=3  �ͱ����apple(2,3)  = apple(2,2)  �൱�ڱ����һ���µĸ�С��ģ�������
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




//G - ��������


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
////������̫��д�ۣ�'['������֣��������ӵ��ַ��ȵ� 
//string solve(){
//	string s,x;
//	char c;
//	int cnt;
//	while(cin>>c){
//		if(c=='['){
//			cin>>cnt;
//			x=solve();//solve���صļ����ַ�ȫ����x�� 
//			while(cnt--)s+=x;
//		}
//		else if(c==']')return s;//�����������return 
//		else s+=c;
//	}
//	return s;
//} 
//int main()
//{
//	//cin>>s;//����Ͳ��������� 
//	cout<<solve()<<endl;
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;
void solve(int x,int k){
//��Ҫ�������   �ڶ����Ƶĵڼ�λ��
	if(x==0)return ;//��������
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




















 
