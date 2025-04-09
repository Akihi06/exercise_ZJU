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



////D - 小A的糖果
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long n,x;
//	cin>>n>>x;
//	long long a[100005];
//	long long sum=0;
//	cin>>a[1];
//	if(a[1]>x){
//		sum+=a[1]-x;
//		a[1]=x;
//	}
//	
//	for(int i=2;i<=n;i++){
//		cin>>a[i];
//		if(a[i]+a[i-1]>x){
//			sum+=a[i]+a[i-1]-x;
//			a[i]=x-a[i-1];
//		}
//	} 
//	cout<<sum;
//	return 0;
// } 




//E - 删数问题

//#include<bits/stdc++.h>
//using namespace std;
////124  142
////1428
////142  128
//
////175438 
////15438
////1438
////138
////13
//
//int a[300];
//int main()
//{
//	string n;
//	int k;
//	int cnt=0;
//	cin>>n>>k;
//	int len=n.length();
//	for(int i=0;i<len;i++){
//		if(cnt==k)break;
//		if(n[i]>n[i+1]){
//			a[i]=1;
//			//这里8成功被去掉是因为8后面默认是0 
//			cnt++;
//		}
//	}
//	for(int i=0;i<len;i++){
//		if(!a[i])cout<<n[i];
//	} 
//	return 0;
// } 



//#include<bits/stdc++.h>
//using namespace std;
//char c[260];
//int main()
//{
//	int len,k;
//	int i,j; 
//	scanf("%s %d",c,&k);
//	len=strlen(c); 
//	while(k--){
//		for(i=0;i<=len-2;i++){
//			if(c[i]>c[i+1]){//因为这里涉及到i+1,所以i<=len-2
//				for(int j=i;j<=len-2;j++){
//					c[j]=c[j+1];
//				}
//				break;//break只能跳出一层循环 
//			}
//		}
//		len--; //8没有被直接删掉，而是因为当所有数字都递增的时候，直接len--，后面的数字根本不会输出 
//	}
//	i=0;
//	while(i<=len-1&&c[i]=='0')i++;//去除前导零（标记最前面为0的部分） 
//	if(i==len)printf("0");//整个数组为空 
//	else{
//		for(j=i;j<=len-1;j++){
//			printf("%c",c[j]);
//		}
//	}
//	return 0;
// } 



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string n;
//	int k;
//	cin>>n>>k;
//	int len=n.length();
////	bool flag=false;
////	int cnt=0;
////	for(int i=0;i<len;i++){
////		if(cnt==k)break;
////		if(n[i]>n[i+1]){
////			a[i]=1;
////			cnt++;
////		}//这样对升序的就不好处理哇 
////	}
//
//	while(k--){
//		for(int i=0;i<len-1;i++){
//			if(n[i]>n[i+1]){
//				for(int j=i;j<len-1;j++){
//					n[j]=n[j+1];
//				}
//				break;
//			}
//		}
//		len--;
//	}	
//	int a=0;
//	while(a<=len-1&&n[a]=='0')a++;
//	if(a==len)cout<<0;
//	for(int i=a;i<len;i++){
//		cout<<n[i];
//	}
//	return 0;
//}




////F - 纪念品分组
//
//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	int s;
//	bool flag;
//}a[30005];
//bool cmp(node x,node y)
//{
//	return x.s<y.s;
//}
//int main()
//{
//	int w,n;
//	cin>>w>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i].s;
//		a[i].flag=true;
//	}
//	sort(a+1,a+n+1,cmp);
//	int cnt=0;
//	for(int i=n;i>=1;i--){
//		if(a[i].flag!=false){
//			//for(int j=i-1;j>=1;j--)
//			for(int j=1;j<=i-1;j++){
//				if(a[j].flag!=false){
//					if(a[i].s+a[j].s<=w){
//						cnt++;
//						a[i].flag=false;
//						a[j].flag=false;
//						break;
//					}
//				}
//			}
//		}
//	}
//	cout<<n-cnt;//这里学一下呢 
//	return 0;
//}




//G - 寄包柜

























