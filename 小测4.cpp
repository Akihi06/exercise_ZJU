//A - 五子棋对弈


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	
//	return 0;
// }



//B - 合并果子


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n; 
//	long long a[10005];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	//long long sum=a[1]+a[2];
//	long long sum=0;
////	for(int i=1;i<=n;i++){
////		if(i==1)sum+=a[i]*(n-i);
////		else sum+=a[i]*(n-i+1);
////	}
//	while(n>1){
//		sort(a,a+n);
//		long long temp=a[1]+a[0];
//		sum+=temp;
//		a[0]=a[n-1];
//		a[1]=temp;
//		n--;
//	}
//	cout<<sum;
//	return 0;
// } 

#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	long long sum=0;
	int pos=1;
	while(n-pos>=1){
		int ans=a[pos]+a[pos+1];
		sum+=ans;
		int i=pos+2;
		while(a[i]<ans&&i<=n){
			a[i-1]=a[i];
			i++;
		}
		a[i-1]=ans;
		pos++;
	}
	return 0;
}





//C - 最大加权矩形


//#include<bits/stdc++.h>
//using namesapce std;
//int dx[4]={-1,0,1,0},
//	dy[4]={0,-1,0,1};
//int main()
//{
//	int n;
//	cin>>n;
//	int a[130][130];
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cin>>a[i][j];
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int n;
//int a[137][137];  //原矩阵
//int sum[137][137]; //存放二维前缀和 
//int main(int argc, char** argv) {
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			cin>>a[i][j];
//			sum[i][j]=sum[i-1][j]+sum[i][j-1]+a[i][j]-sum[i-1][j-1];  //计算二维前缀和，并存入sum数组 
//		}
//	 } 
//	 int mx=-9999999999; //寻找最大值，先定义一个最小值 
//	 for(int x1=1;x1<=n;x1++) //对矩阵进行遍历 
//	 {
//	 	 for(int y1=1;y1<=n;y1++)
//	 	 {
//	 	 	 for(int x2=1;x2<=n;x2++)
//	 	 	 {
//	 	 	 	 for(int y2=1;y2<=n;y2++)
//	 	 	 	 {
//	 	 	 	 		 if(x2<x1||y2<y1)	//必须符合x2>x1,y2>y1才可以 
//							  continue;
//	 	 	 	 mx=max(mx,sum[x2][y2]-sum[x2][y1-1]-sum[x1-1][y2]+sum[x1-1][y1-1]); //寻找子区间的最大值 
//			   	 }
//			 }
//		  }
//	  } 
//	 cout<<mx;
//	return 0;
//}



//#include <bits/stdc++.h>
//#define int long long
//#define endl '\n'
//using namespace std;
//signed main()
//{
//    int i,j,n,l,r,m,min=1e9,p,x1,y1,x2,y2,z;
//    cin>>n;
//    int a[n+1][n+1],s[n+1][n+1];
//    for(i=1;i<=n;i++){
//        for(j=1;j<=n;j++){
//            cin>>a[i][j];
//        }
//    }
//    for(i=1;i<=n;i++){
//        for(j=1;j<=n;j++){
//            s[i][j] = s[i-1][j] + s[i][j-1] + a[i][j] - s[i-1][j-1];
//        }
//    }
//    int ans=INT_MIN;
//        for(int x1=1;x1<=n;x1++)
//		  for(int y1=1;y1<=n;y1++)
//			for(int x2=x1;x2<=n;x2++)
//				for(int y2=y1;y2<=n;y2++)
//                    ans=max(ans,s[x2][y2]-s[x2][y1-1]-s[x1-1][y2]+s[x1-1][y1-1]);
//    cout<<ans;
// 
//}




//D - 逆序对



//归并排序

//#include<bits/stdc++.h>
//using namespace std; 
//const int MAXN=5e5+5;
//int a[MAXN],b[MAXN];
//long long cnt;
//void merge(int l,int r){
//	if(l==r)return ;
//	int mid=(l+r)/2;
//	merge(l,mid);
//	merge(mid+1,r);
//	
//	int i=l,j=mid+1,k=l;//l   mid    r
//	while(i<=mid&&j<=r){
//		if(a[i]<=a[j])b[k++]=a[i++];
//		else{
//			b[k++]=a[j++];
//			cnt+=(mid-i+1);//当 a[i]>a[j] 时，a[i]，…，a[mid] 都与 a[j] 构成逆序对
//		}
//	}
//	while(i<=mid)b[k++]=a[i++];
//	while(j<=r)b[k++]=a[j++];
//	for(int i=l;i<=r;i++){
//		a[i]=b[i];
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
//	merge(1,n);
//	printf("%lld\n",cnt);
//	return 0;
//}






