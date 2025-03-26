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




#include<bits/stdc++.h>
using namespace std;
const int N=5005;
int a[N],b[N],c[N]={0};
int lenc=1,n;
void add()
{
	for(int i=0;i<lenc;i++){
		c[i]+=a[i]+b[i];
//		c[i+1]+=c[i]/10;
		if(c[i]/10)c[i+1]++;
		c[i]%=10; 

		cout<<a[i]<<'+'<<b[i]<<"="<<c[i]<<" "<<c[i+1]<<endl;        
	}
	if(c[lenc]){
		lenc++;
	}
	//1 1 2 3 5 
//	int carry = 0;
//	//处理c
//	for (int i = 0; i < lenc; i++) {
//		c[i] = a[i] + b[i] + carry;
//		carry = c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//	if (carry > 0) {
//		c[lenc] = carry;
//		lenc++;
//	}
	for(int i=0;i<lenc;i++){
		a[i]=b[i];
		b[i]=c[i];
	}
}
int main()
{
	cin>>n;
	a[0]=1;
	b[0]=1;
	if(n==1||n==0)cout<<1;
	else{
		for(int i=2;i<=n;i++){
			add();
		}
		for(int i=lenc-1;i>=0;i--){
			cout<<c[i];
		}
	}
	
	return 0;
 } 










































































































 
