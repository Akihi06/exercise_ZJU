//homework6


//A - ͳ�Ʒ��Σ����ݼ�ǿ�棩

////ö��һ���� 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long int n,m;     //ע�����ݣ���long long int 
//	cin>>n>>m;
//	long long int zcnt=0,sum=0;
////	int minn=0;
//	for(long long int i=0;i<=n;i++){//ע���Ǵ�0��ʼ�����Ǵ�1��ʼ��ͨ�������� 
//		for(long long int j=0;j<=m;j++){
//			zcnt+=min(i,j)+min(n-i,j)+min(i,m-j)+min(n-i,m-j);//һ�������ĸ�����ɢ 
//			sum+=i*j+(n-i)*j+i*(m-j)+(n-i)*(m-j);//�����������ʵ����n*m 
//			//ccnt+=n*m-zcnt;
//		}
//	}
//	sum/=4,zcnt/=4;
//	long long int ccnt=sum-zcnt;
//	cout<<zcnt<<" "<<ccnt;
//	return 0;
//}




//ö�����½�

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


////ö�ٱ߳�
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
//			if(x==y) ans1+=(n-x+1)*(m-y+1);	//ѡһ���ǿ�ʼ���������Ͻǣ������¡����ҷ�ɢ
//			//+1��������о����ģ���ʼλ����һ��		
//			else ans2+=(n-x+1)*(m-y+1);	
//		}	
//	}	
//	cout<<ans1<<" "<<ans2<<endl;
//	
//	return 0;
// } 




////�������ȷ����������������*2������*2��
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n,m,ans=0;
//	ll tot=n*(n+1)*m*(m+1)/4;//���������ߣ���������
//	for(ll a=1;a<=min(m,n);a++){
//		ans+=(n-a+1)*(m-a+1);
//	}
//	cout<<ans<<" "<<tot-ans<<endl;
//	return 0;
// } 





//B - ����


//#include<bits/stdc++.h>
//using namespace std;
//#define rep(i,a,b) for(int i=a;i<=b;i++)
////�����ֵ�����3^10�ǲ��ᳬʱ�ģ���10��ѭ��
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




//C - �������������棩

//#include<bits/stdc++.h>
//using namespace std;
//int a,b,c;
//int flag[15];
//bool check(int temp)
//{
//	memset(flag,0,sizeof(flag));
//	//a:b:c
//	int x=temp,y=x*b/a,z=x*c/a;//������ʽ�� 
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






//D - �̵�̺

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




////E - ɽ�����
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
//		while(a[r+1]<=a[r]&&r<n)r++;  //����ÿ���㶼���㣬�������𰸻Ḳ�� 
//		ans=max(ans,r-l+1);
//	//	while(a[i-1]<=a[i])l--;
//	//	while(a[i+1]>=)
//	}
//	cout<<ans<<endl;
//	return 0;
// } 




//F - ��������


//#include<bits/stdc++.h>
//using namespace std;
//int s[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
////��������꣬������Ҫȥ���Ƕ�����������Ҳ����2��29�գ�
////����������9220�꣨����һ�������꣩���������겻�����⴦�� 
//int main()
//{
//	int a,x; 
//	int ans=0;
//	int m,n;
//	cin>>m>>n;
//	for(int i=1;i<=12;i++){  //�� 12
//		for(int j=1;j<=s[i];j++){//�� 3
//		 	a=(j%10)*1000+(j/10)*100+(i%10)*10+(i/10);
//		 //	1203>>3021
//		 	x=a*10000+i*100+j;      //ֱ�Ӱ���������� 
//		 	if(x<m||x>n)continue;
//		 	ans++;
//		}
//	}
//	cout<<ans;
//	return 0;
// } 






//G - ѡ��

//#include<bits/stdc++.h>         //��n��ѡ��k�����ݹ� 
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
//void dfs(int qs,int cnt,int sum) //�ǵ�void �Ͼ�return �� 
//{
//	if((k-cnt+qs)>n)return ;
////k-cntʣ����Ҫ�����ָ��� 
////k-cnt+qs��ʾ�ӵ�ǰ��ʼλ��qs��ʼ��Ҫѡ��k�����֣���Ҫ���ǵķ�Χ
////���磬k==5���Ѿ�ѡ���������֣�cnt==2������ǰ��ʼλ��qs==4��5-2+4=7�����n==6��Ҫѡ��k��������Ҫ��������7��λ�� 
//	if(cnt==k){
//		if(check(sum))++ans;
//		return ;
//	}
//	for(int i=qs+1;i<=n;i++){//qs��ʾ��ǰ��������ʼλ�� 
//		dfs(i,cnt+1,sum+a[i]);
//	}
//	return ;
// } 
// //1 2 3 4
// //�ݹ�ÿ�η��ض�ֻ����һ�㣬һ�㣡�����������Ϳ��Դﵽ������Ч�� 
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
//	//��������
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






//H - ��ϵ����



//#include<bits/stdc++.h>//n�����r����dfs 
//using namespace std;
//int n,r;
//int a[105];
//void solve(int qs,int k)
////��ǰ��������ʼλ��  �Ѿ�ѡ��k��Ԫ�� 
//{
//	if(k==r+1){
//		for(int i=1;i<=r;i++){//k��1��ʼ����Ϊ���� solve(0,1);
//			printf("%3d",a[i]);
//		}
//		cout<<endl;
//		return ;
//	}
//	for(int i=qs+1;i<=n;i++){
//		a[k]=i;//ѡ�ĵ�k���� 
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




//I - ȫ��������



//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[1005]; 
////void dfs(int qs,int )//�����ۣ��ݹ�Ҫһֱ������ 
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
//	//������next_permutation(start,end)
//	//���ã��ڱ�ʾ[start,end)�ڴ�������в����ϸ����һ���ֵ�������
//	//next_permutation��C++��׼��<algorithm>�е�һ�������������ǽ�һ����Χ�ڵ�Ԫ�����г���һ���ֵ�������� 
//	return 0;
// } 






//J - ������


//#include<bits/stdc++.h>
//using namespace std;
//int a[10050];
//int main()
//{
//	int n,m;	
//	cin>>n>>m;	
//	for(int i=1;i<=n;i++) cin>>a[i];
//	//������ν�����˸��������Ǽ������е���ţ���ѧ�Ҹ���С���Ǹı��ֵ���Ĵ��� 
//	while(m--){	
//		next_permutation(a+1,a+n+1);	
//	}	
//	for(int i=1;i<=n;i++) cout<<a[i]<<" ";	
//	return 0;
//}



//#include <bits/stdc++.h>//����ͷ�ļ�
//#include <iostream>//���Ķ�򼸸�ͷ�ļ�
//#include <cmath>//���Ķ�򼸸�ͷ�ļ�
//#include <cstring>//���Ķ�򼸸�ͷ�ļ�
//int a[101010];//��������
//using namespace std;
//int main()//���뿪ʼ
//{
//	int n;//��n����
//	cin>>n;//����n
//	int x;//��x������
//	cin>>x;//����x
//	for(int i=0;i<n;++i) cin>>a[i];//ѭ����������
//	while(x--)//���ҵ�x������
//	{
//		next_permutation(a+0,a+n);//ȫ���к���
//	}
//	for(int i=0;i<n;++i){
//		cout<<a[i];//ѭ�����
//		if(i!=n-1) cout<<" ";//�粻�����һ������ո�
//	}
//	return 0;//���Ľ�����
//}


        
//#include <bits/stdc++.h>//����ͷ�ļ�                       //������ 
//#include <iostream>//���Ķ�򼸸�ͷ�ļ�
//#include <cmath>//���Ķ�򼸸�ͷ�ļ�
//#include <cstring>//���Ķ�򼸸�ͷ�ļ�
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
//int main()//���뿪ʼ
//{
//	cin>>n;
//	dfs(1);
//	return 0;//���Ľ�����
//}






//K - Ϳ����



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
//		cin>>x; //ֱ������һ��
//		a=b=c=0;//ע�������������������������������������� 
//		for(int j=0;j<m;j++){
//		//��һ�Ŵ�0��ʼ 
//			if(x[j]=='W') a++;//�� 
//			if(x[j]=='B') b++;//�� 
//			if(x[j]=='R') c++;//�� 
//		}
//		s[i][1]=m-a;//ȫͿ�ɰ�ɫ 
//		s[i][2]=m-b;//ȫͿ����ɫ 
//		s[i][3]=m-c;//ȫͿ�ɺ�ɫ 
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
//		cin>>x;                //ע�����������룡������������������ 
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









//L - ������ʽ


////��n=24��ʱ�򣬴�����20������ôС����λ����Ϊ1111 Ҫ8������ö��0~1000����
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
//	dfs(cnt+1,x*s[cnt],y+b[cnt]);//�� 
//	dfs(cnt+1,x,y);//���� (��ѡ��ǰѡ��ĵ�cnt��Ԫ��)                       //ѧһ������ 
//	//ͨ�������ֵݹ���ã�������Ա�������ѡ���ѡ��ÿ��Ԫ�ص������� 
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





//N - С Y ƴľ��


#include<bits/stdc++.h>
using namespace std;
#define C(a) ((a)*((a)-1)/2)  //����� 
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
			if(d==c&&pail[a]>=2&&pail[c]>=2){ //  2/4��� 
				cnt+=(C(pail[a]%mod)*C(pail[c]%mod))%mod;
			}
			else if(d!=c&&pail[a]>=2&&pail[c]&&pail[d]){//  2/4����� 
				cnt+=(C(pail[a]%mod)*(pail[c]%mod)*(pail[d]%mod))%mod;
			}
			cnt%=mod;
		}
	}
	cout<<cnt%mod;
	return 0;
 } 



























