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


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	reutrn 0;
}
































































 
