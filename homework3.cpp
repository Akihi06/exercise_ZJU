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
// 	for(int i=2;i*i<=num;i++)          //注意要取等号，否则2*2=4，4为质数但也是true； 
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
////	return JC(num)*JC(num-1); 但是JC(num)的值是什么呢？
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
//			   //while((s[j++]=getchar())!='\n');     //getchar要读空格！！！！ 
//			   //s[m+1]='\0';
//			scanf("%f",&s[j]); 
//		}
//		an[i]=solve(s,m);
//		//ans=max(an[0],an[i]);          //这里每次都比较了a[0]与其他值的大小。但如果a[0]不是最大值呢？ 
//	}
//	ans=an[0];
//	for(int k=0;k<m;k++)
//	{
//		//ans=max(0,an[k]);                  //还是错的，这里每次都在和0比，应把0放在循环外面 
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
//	return (a>b)?a:b;          //学会用这个写法 
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
//	//int ans=0;                 //直接找出最大的 
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
//	float x[20][100]={};//定义一个n行m列的数组（20为m的最大值，100为n的最大值）
//	float sum[100]={};//定义一个存储答案的数组，由于最多为n的最大值（100）个选手，所以定义的长度为100
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
//    int s[100];  // 存储每个同学的评分
//    float max_score = -1.0;  // 存储最高得分，初始化为负数
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &s[j]);  // 读取每个同学的评分
//        }
//        // 调用 solve 函数计算该同学的得分
//        float score = solve(s, m);
//        // 找出当前最大得分
//        if (score > max_score) {
//            max_score = score;
//        }
//    }
//
//    // 输出最高得分，保留两位小数
//    printf("%.2f\n", max_score);
//
//    return 0;
//}
//
//// 计算每个同学的得分：去掉一个最大分和一个最小分后计算平均
//float solve(int arr[], int m) {
//    int maxn = -1, minn = 11;
//    float sum = 0;
//
//    // 找出最大和最小值，并计算总分
//    for (int i = 0; i < m; i++) {
//        if (arr[i] > maxn) maxn = arr[i];
//        if (arr[i] < minn) minn = arr[i];
//        sum += arr[i];
//    }
//
//    // 去掉最大和最小值后的总和
//    sum -= maxn + minn;
//    // 返回去掉最大最小分后的平均值
//    return sum / (m - 2);
//}


//#include<bits/stdc++.h>
//using namespace std;
//int a[1005],ans=0;              //ans是全局变量，所有函数都可以访问和修改它的值 。
//                          //如果只在主函数定义ans为0，然后在solve函数中修改，最后ans的值还是0
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
//			maxnIndex=j;                 //注意这里的Index 
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
////由题意可知，n为两个质数之积，也就是说只要找到一个数能够被n整除，这个数一定是质数
//int check(int x)
//{
//	if(x==1) return 0;                            //这个算法 超时了 
//	for(int i=2;i*i<=x;i++)
//	{
//		//if(x%i!=0) return 1;  //比如，4%3！=0，但4不是质数 
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
////由题意可知，n为两个质数之积，也就是说只要找到一个数能够被n整除，这个数一定是质数！！！
////2为最小的质数，直接从2开始找，这里通过平方sqrt减小运算次数，找到质数，然后与n相除，
////找到另一个质数，比大小即可，选出最大那个即可。
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
// 	for(int i=2;i*i<=num;i++)          //注意要取等号，否则2*2=4，4为质数但也是true； 
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
//					printf("%d=%d+%d\n",i,j,i-j);//这里就不好进行10=3+7和 10=5+5了，直接用下面的函数来就快捷很多，因为一旦找到一个就可以返回值结束函数 
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
//int zhishu(int n)//判断是否为质数，是返回0不是返回1
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
//int guess(int n)//对质数进行猜想判断,不成立返回0.
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
//	int flag=1;        //方法一：采用数组，进行数组元素的比较 
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
////	                        //方法二：数字反转，反转后与原数比较
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

//#include<stdio.h>            //这个没通过 
//#include<math.h>
//int main()
//{
//	long long int a,sum=0;
//	long long int ans=0;
//	while(scanf("%d",&a)!=EOF)
//	{
//		ans+=a;
//		sum++;
//	}
//	ans=ans*pow(2,sum-1);
//	printf("%lld",ans);
//	return 0;
// } 

//#include<stdio.h>
//#include<math.h>             //这个accept了 
//int main()
//{
//	int a[99];
//	int i=0;
//	long long int sum=0;
//	while(scanf("%d",&a[i])!=EOF)
//	{
//		sum=sum+a[i];
//		i++;
//	}
//    sum=sum*pow(2,i-1);
//    printf("%lld",sum);
//    return 0;
//}




//homework3_J

//#include<stdio.h>
//int taozi(int n)
//{
//	if(n==1) return 1;
//	//taozi(n-1)=taozi(n)/2-1;
//	//return taozi(n);
//	return 2*(taozi(n-1) + 1);
//}
//int main()
//{
//	int n,num;
//	scanf("%d",&n);
//	num=taozi(n);
//	printf("%d",num);
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int fun(int n)
//{
//    if(n == 1)
//        return 1;
//    return 2*(fun(n-1) + 1);
//}
//int main(void)
//{
//    printf("%d",fun(10));
//}
//
//
//
//
//int main()
//{
//int count = 1;
//for (int i = 10; i > 1; i--)
//{
//count = (count + 1) * 2;
//}
//printf("%d\n",count);
//return 0;
//}
//
//
//
//
//
//#include<stdio.h>
//
//int eat_peach(int day)
//{
//    int rs = 0;
//    if(day==10)
//    {
//        rs = 1;
//        printf("day:%d  rs:%d\n",day,rs);
//    }
//    else
//    {
//        rs = (eat_peach(day+1) + 1) * 2;
//        printf("day:%2d  rs:%d\n",day,rs);
//    }
//    return rs;
//}
//
//void main()
//{
//    eat_peach(1);
//}




//homework3_K
//#include<stdio.h>
//struct node
//{
//	char name[1000];
//	int age;
//	int score;
// }student[10]; 
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++)
//	{
//		scanf("%s %d %d",student[i].name,&student[i].age,&student[i].score);         //记得取地址 ！！！！！ 
//	}
//	for(int i=1;i<=n;i++)
//	{
//		student[i].age++;
//		student[i].score*=1.2;
//		if(student[i].score>600)student[i].score=600;
//		printf("%s %d %d\n",student[i].name,student[i].age,student[i].score);
//	}
//	return 0;
//}






//homework3_L

////#include<stdio.h>
////#include<stdlib.h>
////#include<string>
//
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//struct node
//{                                               //涉及到string类型的话，就直接用C++ 
//	string name;
//	int a,b,c;
//	int score;
//}student[1005];
//
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	
//	for(int i=1;i<=n;i++)
//	{
//		student[i].name.resize(100);
//		scanf("%s %d %d %d",&student[i].name,&student[i].a,&student[i].b,&student[i].c);
//		student[i].score=student[i].a+student[i].b+student[i].c;
//	}
//	for(int j=1;j<=n;j++)
//	{
//		//for(int k=j;k<=n;k++)
//		for(int k=j+1;k<=n;k++)
//		{
//			if(abs(student[j].score-student[k].score)<=10
//			&&abs(student[j].a-student[k].a)<=5
//			&&abs(student[j].b-student[k].b)<=5
//			&&abs(student[j].c-student[k].c)<=5);
//			{
////				if(student[j].name<student[k].name){
////					printf("%s %s",student[j].name.c_str(),student[k].name.c_str());
////				}
////				else
////					printf("%s %s",student[k].name.c_str(),student[j].name.c_str());
//				if (student[j].name < student[k].name)
//                    cout << student[j].name << " " << student[k].name << "\n";
//                else
//                    cout << student[k].name << " " << student[j].name << "\n";
//
//			}
//		}
//	}
//	return 0;
//}
//
//
//
//
//
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//    //定义Student结构体，用于表示学生的相关信息
//    struct Student
//    {
//        string name;  //学生的姓名
//        int chinese;  //语文课程成绩
//        int m;        //数学课程成绩
//        int e;        //英语课程成绩
//        int sum;      //上述三门课程成绩的总和
//    };
//    //声明一个Student结构体类型的数组，用于存储多个学生的信息，最多可存1000个学生
//    struct Student student[1000];
//    int N;
//    cin >> N;    //从标准输入获取要输入的学生数量
//    for (int i = 0; i < N; i++)
//    {
//        //依次读取学生的姓名、语文课程成绩、数学课程成绩、英语课程成绩
//        cin >> student[i].name
//            >> student[i].chinese
//            >> student[i].m
//            >> student[i].e;
//        //计算该学生三门课程成绩的总和，并存储到sum成员变量中
//        student[i].sum =
//            student[i].chinese
//            + student[i].m
//            + student[i].e;
//    }
//    //两层嵌套循环，用于对学生信息进行两两比较
//    for (int i = 0; i < N - 1; i++)
//    {
//        for (int j = i + 1; j < N; j++)
//        {
//            //判断两个学生的每门课程成绩差值的绝对值是否满足相应条件
//            //语文课程成绩差值绝对值需不大于5
//            //数学课程成绩差值绝对值需不大于5
//            //英语课程成绩差值绝对值需不大于5
//            //总成绩差值绝对值需不大于10
//            if (abs(student[i].chinese - student[j].chinese) <= 5
//                && abs(student[i].m - student[j].m) <= 5
//                && abs(student[i].e - student[j].e) <= 5
//                && abs(student[i].sum - student[j].sum) <= 10)
//            {
//        //如果满足成绩条件，按照姓名字典序比较两个学生的姓名
//        //若学生i的姓名字典序小于学生j的姓名字典序，则先输出学生i的姓名，再输出学生j的姓名
//                if (student[i].name < student[j].name)
//                    cout << student[i].name << " " << student[j].name << "\n";
//                //反之，先输出学生j的姓名，再输出学生i的姓名
//                else
//                    cout << student[j].name << " " << student[i].name << "\n";
//            }
//        }
//    }
//    return 0;
//}
//










//homework3_M


#include<bits/stdc++.h>                     //ans1
int a[1025][1025];
int i,j;
void f(int n,int x,int y){
	if(n==1){
		for(i=x;i<x+pow(2,n)/2;i++){
			for(j=y;j<y+pow(2,n)/2;j++)
				a[i][j]=0;
		}
	}
	else{
		f(n-1,x+pow(2,n)/2,y);
		f(n-1,x+pow(2,n)/2,y+pow(2,n)/2);
		f(n-1,x,y+pow(2,n)/2);
		for(i=x;i<x+pow(2,n)/2;i++){
			for(j=y;j<y+pow(2,n)/2;j++)
				a[i][j]=0;
		}
	}
}
int main(){
	int n,t=1;
	scanf("%d",&n);
	for(i=1;i<=pow(2,n);i++){
		for(j=1;j<=pow(2,n);j++){
			a[i][j]=1;
		}
	}
	f(n,t,t);
	int g=pow(2,n);
	for(i=1;i<=pow(2,n);i++){
		for(j=1;j<pow(2,n);j++){
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[i][g]);
	}
}






#include <iostream>                        //cpp ans 2
#include <cmath>
using namespace std;
int ans[1050][1050] = {0}, n;          //2^10=1024 
void she(int x, int y, int n) {
    if (n == 0) {
        ans[x][y] = 1;
    } else {
        she(x + (pow(2, n - 1)), y, n - 1);
        she(x, y + (pow(2, n - 1)), n - 1);
        she(x + (pow(2, n - 1)), y + (pow(2, n - 1)), n - 1);
    }
}
int main() {
    cin >> n;
    she(0, 0, n);
    for (int i = 0; i < pow(2, n); i++) {
        for (int j = 0; j < pow(2, n); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}






#include<stdio.h>                                           //C ans 3
#include<math.h>
void pardon(int *start,int x,int y);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int m = (int)pow(2,n);
	int crimer[m][m];	
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			crimer[i][j] = 1;
	
	pardon(&crimer[0][0],m,m);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",crimer[i][j]);
		printf("\n");
	}	
			
	return 0;
}

void pardon(int *start,int x,int y) 
{
	int *p,k,row;  //p表示每行赦免的第一个位置，k用来进行列的右移，row用来记录所在行 
	if(x>0)
	{
		for(p=start,row=0;row<x/2;p+=y,row++)	//y的作用是让p换行 
			for(k=0;k<x/2;k++)
				*(p+k) = 0;
								 
		pardon(start+x/2,x/2,y);       //对右上的方块进行赦免 
		pardon(start+y*x/2,x/2,y);     //对左下的方块进行赦免 
		pardon(start+(y+1)*x/2,x/2,y); //对右下的方块进行赦免 
	}	
}




































