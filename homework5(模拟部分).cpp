//homework5 

//Aƹ����


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
//		if(ch=='L')a[++cnt]=0;           //ע���Сд�л������� 
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








//B - ɨ����Ϸ


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








//C - �������



//#include<bits/stdc++.h>                         //ans1 
//using namespace std;
//int pos[100005];
//char s[100005][12];
//int m,n;
//int main()
//{
//	cin>>n>>m;
//	for(int i=0;i<n;i++){       //ע������һ���Ǵ�0��n-1
//	                            // ��Ϊ�����ǻ�״�ṹ 
//		cin>>pos[i];
//		scanf("%s",s[i]);
//	}
//	int front=0,k=0,temp;
//	int cnt=0; 
//	//0��1�� 
//	while(m--){
//		cin>>k>>cnt;
//		temp=(k==pos[front]?-1:1);
//		//����0��������0������С 
//		front=(front+n+temp*cnt)%n;//��n��ֹ���ȡ�����Ǹ��� 
//		                           //������0~n-1������ȡģ���ֵ��n-1�����������������
//								   //���������1~n��n%n�����1����n��������ͬ�ڲ��ߣ�������Ҫ��һ�� 
//	}
//	cout<<s[front]<<endl;
//	return 0;
// } 




#include<cstdio>                      //ans2
int n,m,a,s,ans;
struct node
{	char name[12];
	int dir;
}x[100050];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)scanf("%d%s",&x[i].dir,x[i].name);
    while(m--)
    {
        scanf("%d%d",&a,&s);
        if(a==x[ans].dir)ans-=s;
        else ans+=s;
        if(ans<0)ans+=n;
        ans%=n;
    }
    printf("%s",x[ans].name);
    return 0;
}



















































































