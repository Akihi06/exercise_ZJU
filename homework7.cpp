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


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	reutrn 0;
}
































































 
