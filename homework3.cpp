//homework3 


//homework3_A

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//    double x1, x2, x3, y1, y2, y3;
//    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//    
//    double d1, d2, d3;
//    
//    d1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//    d2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
//    d3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
//    
//    double s = d1 + d2 + d3;
//    
//    printf("%.2lf\n", s);
//    
//    return 0;
//}

 


//homework3_B
//#include<stdio.h>
// bool check(int num)
// {
// 	if(num==1||num==0)
// 	{
// 		return false;
//	 }
// 	for(int i=2;i*i<=num;i++)          //ע��Ҫȡ�Ⱥţ�����2*2=4��4Ϊ������Ҳ��true�� 
// 	{
// 		if(num%i==0)
// 		{
// 			return false;
//		 }
//	 }
//	 return true;
// }
// 
// int main()
// {
// 	int n,x;
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++)
// 	{
// 		scanf("%d",&x);
// 		if(check(x))printf("%d ",x);
//	 }
// 	return 0;
// }



//homework3_C

//#include<stdio.h>
//int JC(int num)
//{
//	if(num==1)return 1;
//	else
////	return JC(num)*JC(num-1); ����JC(num)��ֵ��ʲô�أ�
//	return num*JC(num-1); 
// } 
// 
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",JC(n));
//	return 0;
//}


//homework3_D


//#include<stdio.h> 
//int max(int a,int b);
//int min(int a,int b);
//float solve(float arr[],int m);
//
//int main()
//{
//	//int n,m;
//	int n,m,maxx=0,minn=11;
//	float ans=0.0;
//	scanf("%d %d",&n,&m);
//	float s[1005];
//	float an[1005];
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			   //while((s[j++]=getchar())!='\n');     //getcharҪ���ո񣡣����� 
//			   //s[m+1]='\0';
//			scanf("%f",&s[j]); 
//		}
//		an[i]=solve(s,m);
//		//ans=max(an[0],an[i]);          //����ÿ�ζ��Ƚ���a[0]������ֵ�Ĵ�С�������a[0]�������ֵ�أ� 
//	}
//	ans=an[0];
//	for(int k=0;k<m;k++)
//	{
//		//ans=max(0,an[k]);                  //���Ǵ�ģ�����ÿ�ζ��ں�0�ȣ�Ӧ��0����ѭ������ 
//	 	ans=max(ans,an[k]);
//	 } 
//	 
//	printf("%.2f",ans);
//
//	return 0;
//}
//
//int max(int a,int b)
//{
//	return (a>b)?a:b;          //ѧ�������д�� 
//}
//
//int min(int a,int b)
//{
//	return (a<b)?a:b;
//}
////int solve(int arr[],int m)
//float solve(float arr[],int m)
//{
//	int maxn=0,minn=11,ans=0;
//	//int ans=0;                 //ֱ���ҳ����� 
//	float sum=0;
//	for(int i=0;i<m;i++)
//	{
//		maxn=max(arr[i],maxn);
//		minn=min(arr[i],minn);
//		sum+=arr[i];
//	}
//	sum=sum-maxn-minn;
//	//return sum/(m-2);
//	//return ans=max(ans,sum);// ====>>return sum;
//	return sum/(m-2);
//}


//#include <bits/stdc++.h>
//using namespace std;
//int main() 
//{
//    float n,m,maxx=0,minn=2e9,ans=0;
//	cin>>n>>m;
//	float x[20][100]={};//����һ��n��m�е����飨20Ϊm�����ֵ��100Ϊn�����ֵ��
//	float sum[100]={};//����һ���洢�𰸵����飬�������Ϊn�����ֵ��100����ѡ�֣����Զ���ĳ���Ϊ100
//
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cin>>x[j][i];
//			maxx=max(maxx,x[j][i]);
//			minn=min(minn,x[j][i]);
//			sum[i]+=x[j][i];
//		}
//		sum[i]=sum[i]-maxx-minn;
//		sum[i]=sum[i]/(m-2);
//		maxx=0;
//		minn=2e9;
//	}
//	for(int i=0;i<n;i++)
//	{
//		ans=max(ans,sum[i]);
//	}
//	printf("%.2lf",(float)ans);
//    return 0;
//}



//#include <stdio.h>
//#include <limits.h>
//
//float solve(int arr[], int m);
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    int s[100];  // �洢ÿ��ͬѧ������
//    float max_score = -1.0;  // �洢��ߵ÷֣���ʼ��Ϊ����
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &s[j]);  // ��ȡÿ��ͬѧ������
//        }
//        // ���� solve ���������ͬѧ�ĵ÷�
//        float score = solve(s, m);
//        // �ҳ���ǰ���÷�
//        if (score > max_score) {
//            max_score = score;
//        }
//    }
//
//    // �����ߵ÷֣�������λС��
//    printf("%.2f\n", max_score);
//
//    return 0;
//}
//
//// ����ÿ��ͬѧ�ĵ÷֣�ȥ��һ�����ֺ�һ����С�ֺ����ƽ��
//float solve(int arr[], int m) {
//    int maxn = -1, minn = 11;
//    float sum = 0;
//
//    // �ҳ�������Сֵ���������ܷ�
//    for (int i = 0; i < m; i++) {
//        if (arr[i] > maxn) maxn = arr[i];
//        if (arr[i] < minn) minn = arr[i];
//        sum += arr[i];
//    }
//
//    // ȥ��������Сֵ����ܺ�
//    sum -= maxn + minn;
//    // ����ȥ�������С�ֺ��ƽ��ֵ
//    return sum / (m - 2);
//}


//#include<bits/stdc++.h>
//using namespace std;
//int a[1005],ans=0;              //ans��ȫ�ֱ��������к��������Է��ʺ��޸�����ֵ ��
//                          //���ֻ������������ansΪ0��Ȼ����solve�������޸ģ����ans��ֵ����0
//void solve(int s[],int m)
//{	int maxn=0,minn=11,sum=0;	
//	for(int i=1;i<=m;i++)
//	{	sum+=s[i];	
//		maxn=max(s[i],maxn);	
//			minn=min(s[i],minn);	
//	}	
//	ans=max(ans,sum-maxn-minn);
//}
//int main()
//{	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n;i++)
//	{	for(int j=1;j<=m;j++)
//		{	
//		cin>>a[j];		
//		}		
//		solve(a,m);	
//	}	
//	printf("%.2lf",(ans*1.0)/(m-2));	
//	
//	return 0;
//}



//homework3_E

//#include<stdio.h>
//struct node
//{
//	char name[10];
//	int a,b,c;
//	int score;
//	int id;
// } student[1005];
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		getchar();
//		scanf("%s %d %d %d",student[i].name,&student[i].a,&student[i].b,&student[i].c);
//		student[i].score=student[i].a+student[i].b+student[i].c;
//		student[i].id=i;
//	}
//	int maxn=student[0].score;
//	int maxnIndex = 0; 
//	for(int j=0;j<n;j++)
//	{
//		if(maxn<student[j].score)
//		{
//			maxn=student[j].score;
//			maxnIndex=j;                 //ע�������Index 
//		}
//	}
//	printf("%s %d %d %d",student[maxnIndex].name,student[maxnIndex].a,student[maxnIndex].b,student[maxnIndex].c);
//	return 0;
//}
//
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	string s;
//	int a,b,c;
//	int sum,id;
//}f[10005];
//
//bool cmp(node x,node y)
//{ 	 
//	return (x.sum>y.sum)||(x.sum==y.sum&&x.id<y.id);
//}
//
//int main()
//{	 int n;
//	 cin>>n;
//	 for(int i=1;i<=n;i++)
//	 {	cin>>f[i].s>>f[i].a>>f[i].b>>f[i].c;
//	    f[i].sum=f[i].a+f[i].b+f[i].c;
//		f[i].id=i;
//	 }
//	 sort(f+1,f+n+1,cmp);
//	 cout<<f[1].s<<" "<<f[1].a<<" "<<f[1].b<<" "<<f[1].c<<endl;
//	 return 0;
//}




//homework3_F

//#include<stdio.h>
//#include<math.h>
////�������֪��nΪ��������֮����Ҳ����˵ֻҪ�ҵ�һ�����ܹ���n�����������һ��������
//int check(int x)
//{
//	if(x==1) return 0;                            //����㷨 ��ʱ�� 
//	for(int i=2;i*i<=x;i++)
//	{
//		//if(x%i!=0) return 1;  //���磬4%3��=0����4�������� 
//		if(x%i==0) return 0;
//	}
//	return 1;
// } 
//int main()
//{
//	int n;
//	
//	scanf("%d",&n);
//	for(int i=n;i>=sqrt(n);i--)
//	{
////		if(check(i))
////		{
////			if(check(n/i)&&n*1.0/i==(int)n*1.0/i)
////			{
////				printf("%d",i);
////				break;
////			}
//		if(n%i==0)
//		{
//			if(check(i))
//			{
//				printf("%d",i);
//				break;
//			}
//			else continue;
//		 } 
//	}
//	
//	return 0;
//}
//
//#include<bits/stdc++.h>
//int main(){
//    int a;
//	std::cin>>a;
//	for(int i = 2;i<=a/i;i++)
//		if(a%i==0)
//		{std::cout<<a/i;
//		return 0;
//		}
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>   
////�������֪��nΪ��������֮����Ҳ����˵ֻҪ�ҵ�һ�����ܹ���n�����������һ��������������
////2Ϊ��С��������ֱ�Ӵ�2��ʼ�ң�����ͨ��ƽ��sqrt��С����������ҵ�������Ȼ����n�����
////�ҵ���һ���������ȴ�С���ɣ�ѡ������Ǹ����ɡ�
//
//int main()
//{
//    int a,i,j,max;
//    scanf("%d",&a);
//    for(i=2;i<sqrt(a);i++)
//	{
//        if(a%i==0)
//		{
//            j=a/i;
//            break;
//        }
//    }
//    if(i>j)
//	{
//        max=i;
//    }
//    else
//	{
//        max=j;
//    }
//    printf("%d",max);
//    return 0;
//}








//homework3_G


//#include<stdio.h>
// bool check(int num)
// {
// 	if(num==1||num==0)
// 	{
// 		return false;
//	 }
// 	for(int i=2;i*i<=num;i++)          //ע��Ҫȡ�Ⱥţ�����2*2=4��4Ϊ������Ҳ��true�� 
// 	{
// 		if(num%i==0)
// 		{
// 			return false;
//		 }
//	 }
//	 return true;
// }
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=4;i<=n;i+=2)
//	{
//		for(int j=2;j<=n/2;j++)
//		{
//			if(check(j))
//			{
//				if(check(i-j)&&i>=j) 
//				{
//					printf("%d=%d+%d\n",i,j,i-j);//����Ͳ��ý���10=3+7�� 10=5+5�ˣ�ֱ��������ĺ������Ϳ�ݺܶ࣬��Ϊһ���ҵ�һ���Ϳ��Է���ֵ�������� 
//				}
//			}
//		}
//	}
//	
//	return 0;
// } 
//
//
//
//#include<stdio.h>
//#include<math.h>
//int zhishu(int n)//�ж��Ƿ�Ϊ�������Ƿ���0���Ƿ���1
//{
//    int i,b=0;
//    for(i=2;i<=sqrt(n);i++)
//     if(n%i==0)
//     {
//         b++;
//         break;
//     }
//     return b;
//}
//int guess(int n)//���������в����ж�,����������0.
//{
//    int i;
//    for(i=2;i<=n/2;i++)
//      if(zhishu(i)==0)
//      {
//          if(zhishu(n-i)==0) return i;
//      }
//      return 0;
//}
//main()
//{
//	int N,i;
//	scanf("%d",&N);
//	for(i=4;i<=N;i+=2)
//	 if(guess(i)!=0) printf("%d=%d+%d\n",i,guess(i),i-guess(i));
//}





//homework3_H
//#include<stdio.h>
//int check(int x)
//{
//	if(x==0||x==1)return 0;
//	for(int i=2;i*i<=x;i++)
//	{
//		if(x%i==0) return 0;
//	}
//	return 1;
// } 
//
//int huiwen(int n)
//{
//	int a[12];
//	int flag=1;        //����һ���������飬��������Ԫ�صıȽ� 
//	while(n>0)
//	{
//		a[flag]=n%10;
//		n/=10;
//		flag++;
//	}
//	for(int i=1;i<=flag/2;i++)
//	{
//		if(a[i]!=a[flag-i]) return 0; //13 12 0 11
//	 } 
//	 return 1;
//	 
////	                        //�����������ַ�ת����ת����ԭ���Ƚ�
////	int sum=0;
////	while(n!=0)
////	{
////		sum=sum*10+n%10;
////		n/=10;
////	} 
////	if(num==n)return 1;
////	else return 0;
//	
//}
//int main()
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	for(int i=a;i<=b;i++)
//	{
//		if(huiwen(i)&&check(i))
//			printf("%d\n",i);
//	}
//	
//	return 0;
//}





//homework3_I





































































































