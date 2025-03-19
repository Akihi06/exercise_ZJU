//homework5 

//A乒乓球


//#include<bits/stdc++.h>                                      //ans1 
//using namespace std;
////const int MAXN 630000;
//const int MAXN=63000;
//int a[MAXN];
////char s[MAXN];
//int cnt=0;
//char ch;
//int f[3]={0,11,21};
//int main()
//{
//	while(1)
//	{
//		ch=getchar();
//		if(ch=='E')break;
//		if(ch=='W')a[++cnt]=1;
//		if(ch=='L')a[++cnt]=0;           //注意大小写切换啊啊啊 
//	}
//	for(int k=1;k<=2;k++)
//	{
//		int w=0,l=0;
//		for(int i=1;i<=cnt;i++)
//		{
//			w+=a[i];
//			l+=1-a[i];
//			if(max(w,l)>=f[k]&&abs(w-l)>=2)
//			{
//				printf("%d:%d\n",w,l);
//				w=0,l=0;
//			}
////			printf("%d:%d\n",w,l);
//		}
////		printf("%d:%d\n",w,l);
//		printf("%d:%d\n\n",w,l);
//	}
//	return 0;
//}



//#include<bits/stdc++.h>                                    //ans2 
//using namespace std;
//char str[1000001], a;
//int cnt=0;
//void ccl(int n)
//{
//    int a=0,b=0;
//    for(int i=1;i<=cnt;i++)
//    {
//        if(str[i]=='W')
//        {
//            a++;
//        }
//        if(str[i]=='L')
//        {
//            b++;
//        }
//        if((a>=n||b>=n)&&abs(a-b)>=2)
//        {
//            cout<<a<<":"<<b<<endl;
//            a=b=0;
//        }
//    }
//    cout<<a<<":"<<b<<endl;
//    return;
//}
//int main()
//{
//    while(cin>>a&&a!='E')
//    {
//        if(a=='W'||a=='L')
//        {
//            cnt++; 
//            str[cnt]=a;
//        }
//    }
//    ccl(11);
//    cout<<endl;
//    ccl(21);
//    return 0;
//}








//B - 扫雷游戏


//#include<bits/stdc++.h>
//using namespace std;
//int m,n;
//char a[105][105];
//char ch;
//int dx[8]={1,1,0,-1,-1,-1,0,1},	dy[8]={0,-1,-1,-1,0,1,1,1};
//int main()
//{
//	cin>>n>>m;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
////			ch=getchar();
////			if(ch=='?'||ch=='*'){
////				a[i][j]=ch;	
//
////			cin>>a[i];
//			cin>>a[i][j];
//			if(a[i][j]=='?')a[i][j]='0';
//		} 
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if(a[i][j]=='*')continue;
//			for(int k=0;k<8;k++)
//			{
//				int xx=i+dx[k],yy=j+dy[k];
//				if(a[xx][yy]=='*')a[i][j]++;
//			}
//		} 
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout<<a[i][j];
//		} 
//		cout<<endl;
//	}
//	return 0;
// } 








//C - 玩具谜题



//#include<bits/stdc++.h>                         //ans1 
//using namespace std;
//int pos[100005];
//char s[100005][12];
//int m,n;
//int main()
//{
//	cin>>n>>m;
//	for(int i=0;i<n;i++){       //注意这里一定是从0到n-1
//	                            // 因为这里是环状结构 
//		cin>>pos[i];
//		scanf("%s",s[i]);
//	}
//	int front=0,k=0,temp;
//	int cnt=0; 
//	//0左1右 
//	while(m--){
//		cin>>k>>cnt;
//		temp=(k==pos[front]?-1:1);
//		//朝里0并且向左0》》减小 
//		front=(front+n+temp*cnt)%n;//加n防止最后取余结果是负数 
//		                           //索引是0~n-1，这里取模最大值是n-1，符合这里的索引。
//								   //如果索引是1~n，n%n结果是1，走n步本来等同于不走，但现在要走一步 
//	}
//	cout<<s[front]<<endl;
//	return 0;
// } 




//#include<cstdio>                      //ans2
//int n,m,a,s,ans;
//struct node
//{	char name[12];
//	int dir;
//}x[100050];
//int main()
//{
//    scanf("%d%d",&n,&m);
//    for(int i=0;i<n;i++)scanf("%d%s",&x[i].dir,x[i].name);
//    while(m--)
//    {
//        scanf("%d%d",&a,&s);
//        if(a==x[ans].dir)ans-=s;
//        else ans+=s;
//        if(ans<0)ans+=n;
//        ans%=n;
//    }
//    printf("%s",x[ans].name);
//    return 0;
//}





//D - A+B Problem（高精）



//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN=100005;
//int a[MAXN],b[MAXN],c[MAXN];
//int lc;
//char as[MAXN],bs[MAXN];
//
//int main()
//{
//	scanf("%s %s",as,bs);
//	int la=strlen(as);
//	int lb=strlen(bs);
//	for(int i=0;i<la;i++){
////		a[i]=as[i]-'0';
//		a[i]=as[la-i-1]-'0';//倒序啊 
//	}
//	for(int i=0;i<lb;i++){
//		b[i]=bs[lb-i-1]-'0';
//	}
//	lc=max(la,lb);
//	//
//	if(a[la-1]+b[lb-1]>=10)lc++;
//	for(int i=0;i<lc;i++){
//		int temp=a[i]+b[i];
////		c[i]=temp%10;
//		c[i]+=temp;
////		c[i]=temp%10;//哇塞哇塞，都加到c[i]上了，又给temp处理上啦，耗油实力 
//		if(c[i]/10)c[i+1]++;
//		c[i]=c[i]%10; 
////		c[i+1]=temp/10;
//        //这样的话操作了和没操作有什么区别吗，下一次又覆盖了
//		 
////		c[i+1]++;
////		if(temp/10)c[i+1]++;//需要计算的是加后的结果，不是temp啊啊啊 
//	}
////	for(int i=0;i<lc;i++){	
////		c[i]=a[i]+b[i]+c[i];		
////		if(c[i]>=10){		
////			c[i]-=10;			
////			c[i+1]++;		
////		}	
////	}
//	for(int i=lc-1;i>=0;i--){
//		cout<<c[i];
//	}
//	return 0;
// } 




//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN=100005;
//char as[MAXN],bs[MAXN];
//int a[MAXN],b[MAXN],c[MAXN],la,lb,lc;
//int main()
//{
//	scanf("%s %s",as,bs);
//	la=strlen(as);
//	lb=strlen(bs);
//	lc=max(la,lb);
//	for(int i=0;i<la;i++){
//		a[i]=as[la-i-1]-'0';          //一定注意要减掉0！！！！！！！！！！ 
//	}
//	for(int i=0;i<lb;i++){
//		b[i]=bs[lb-i-1]-'0';
//	}
//	if(a[la-1]+b[la-1]>=10)lc++;
//	for(int i=0;i<lc;i++)
//	{
//		c[i]+=a[i]+b[i];
//		if(c[i]>=10){
//			c[i]-=10;
//			c[i+1]++;
//		}
//	}
//	for(int i=lc-1;i>=0;i--){
//		cout<<c[i];
//	}
//	
//	return 0;
//}








//E - A*B Problem




//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN=1e4+5;
//char as[MAXN],bs[MAXN];
//int a[MAXN],b[MAXN],c[MAXN],la,lb,lc;
//int main()
//{
//	scanf("%s %s",as,bs);
//	la=strlen(as);
//	lb=strlen(bs);
//	for(int i=0;i<la;i++){
//		a[i]=as[la-i-1]-'0';//注意减掉‘0’！！！！！！！！ 
//	}
//	for(int i=0;i<lb;i++){
//		b[i]=bs[lb-i-1]-'0';
//	}
//////	if(a[la-1]*b[lb-1]>=10)lc++;
//
//
////	for(int i=0;i<lc;i++){
////		c[i]+=a[i]*b[i];//注意是+=不是=！！！！！！！！！！ 
////		if(c[i]>=10){
////			c[i+1]+=c[i]/10;//注意是+=不是=！！！！！！！！！！ 
////			c[i]=c[i]%10;
////		}
////	}
////	if(c[lc])lc++; 
////	bool flag=true;
////	for(int i=lc-1;i>=0;i--){
////		if(c[i]==0&&flag){
////			if(c[i-1]!=0){
////				flag=false;
////			}
////			continue;
////		}
////		cout<<c[i];
////	} 
//	for(int i=0;i<la;i++){
//		for(int j=0;j<lb;j++){
//			c[i+j]+=a[i]*b[j];           //注意是i+j 
//			c[i+j+1]+=c[i+j]/10;
//			c[i+j]%=10;
////			c[j]+=a[i]*b[j];
////			if(c[j]>=10){
////				c[j+1]+=c[j]/10;
//////				c[j]=c[j]/10;
////				c[j]%=10;
////			}
//		}
//	}
//	lc=la+lb;
//	while(c[lc-1]==0&&lc>1)lc--; //去除前导0   3*3=09，3*33=099 
//	for(int i=lc-1;i>=0;i--){
//		cout<<c[i];
//	}
//
//	return 0;
// } 




//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN=100005;
//char a1[MAXN],b1[MAXN];
//int a[MAXN],b[MAXN],c[MAXN],la,lb,lc;
//int main()
//{
//	cin>>a1>>b1;
//	la=strlen(a1),lb=strlen(b1);
//	for(int i=0;i<la;i++)a[i]=a1[la-i-1]-'0';
//	for(int i=0;i<lb;i++)b[i]=b1[lb-i-1]-'0';
//	lc=la+lb;
//	for(int i=0;i<la;i++){
//		for(int j=0;j<lb;j++){
//			c[i+j]+=a[i]*b[j];               //一定注意这里都是+=！！！！！！！！ 
//			c[i+j+1]+=c[i+j]/10;
//			c[i+j]%=10;
//		}
//	}
//	while(c[lc-1]==0&&lc>1)lc--;
//	for(int i=lc-1;i>=0;i--)cout<<c[i];
//	return 0;
// } 




//F - 高精度减法

//  1234     4321
// -  56     65
// _____ 

//    56
// -1234
//______
//数字的字典序：
//短的更小，数字小的更大小（与常理一致）
////错误 ：位数不同时，从高位开始比25>3(因为2>3)
//位数相同时，58>52 
//123<125
//字典序的最高优先级往往不是长度！！！！！！ 
#include<bits/stdc++.h>
using namespace std;
const int MAXN=20090;
//char a1[MAXN],b1[MAXN];
string a1,b1; 
int a[MAXN],b[MAXN],c[MAXN],la,lb,lc;
int main()
{
	bool flag=false;
	cin>>a1>>b1;
	la=a1.length();
	lb=b1.length();
	//if(a1<b1)  5>23
	if(la<lb||(la==lb&&a1<b1))
	{
		swap(a1,b1);
		swap(la,lb);
		flag=true; 
	}
	for(int i=0;i<la;i++)a[i]=a1[la-i-1]-'0';
	for(int i=0;i<lb;i++)b[i]=b1[lb-i-1]-'0';
	lc=la;
	for(int i=0;i<lc;i++){
		if(a[i]<b[i]){
			c[i]+=10;
			c[i+1]--;
//			a[i]+=10;
//			a[i+1]--;
		}
		c[i]+=a[i]-b[i];
	}
	while(c[lc-1]==0&&lc>1)lc--;
	if(flag)cout<<'-';
	for(int i=lc-1;i>=0;i--)cout<<c[i];
	return 0;
 }





//#include<bits/stdc++.h>
//using namespace std;
//string a,b;
//int lena,lenb;
//int x[20090],y[20090],c[20090];
//int t;
//int main()
//{
//	int flag=false;	
//	cin>>a>>b;	
//	lena=a.size();	
//	lenb=b.size();	
//	if(lena<lenb||(lena==lenb&&a<b)){	
//		swap(a,b);		
//		swap(lena,lenb);		
//		flag=true;
//	}	
//	for(int i=1;i<=lena;i++){	
//		x[i]=a[lena-i]-'0';	
//	}	
//	for(int i=1;i<=lenb;i++){	
//		y[i]=b[lenb-i]-'0';
//	}	
//	int lenc=lena;	
//	for(int i=1;i<=lenc;i++){	
//		if(x[i]<y[i]){		
//			x[i+1]--;			
//			x[i]+=10;	
//		}		
//		c[i]=x[i]-y[i];
//	}	
//	while(c[lenc]==0&&lenc>1) lenc--;//注意，和乘法一样要消去0，因为减法会导致位数减少	
//	if(flag) cout<<'-';	
//	for(int i=lenc;i>=1;i--) cout<<c[i];		
//	return 0;
//}









//#include<bits/stdc++.h>
//using namespace std;
//string a,b; 
//int lena,lenb;
//int x[20090],y[20090],c[20090];
//int main()
//{
//	int flag=false;
//	cin>>a>>b;
//	lena=a.size();
//	lenb=b.size();
//	if(lena<lenb||(lena==lenb&&a<b)){
//		swap(a,b);
//		swap(lena,lenb);
//		flag=true; 
//	}
//	for(int i=1;i<=lena;i++){
//		x[i]=a[lena-i]-'0';
//	}
//	for(int i=1;i<=lenb;i++){
//		y[i]=b[lenb-i]-'0';//注意减去0！！！！！！！！ 
//	}
//	int lenc=lena;
//	for(int i=1;i<=lenc;i++){
//		if(x[i]<y[i]){
////			c[i]+=10;
////			c[i+1]--;
//			x[i]+=10;
//			x[i+1]--;
//		}
//		c[i]+=x[i]-y[i];
//	}
//	while(c[lenc]==0&&lenc>1)lenc--;
//	if(flag)cout<<'-';
//	for(int i=lenc;i>=1;i--)cout<<c[i];
//	return 0;
// } 



































