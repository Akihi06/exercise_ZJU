////冒泡排序 BubbleSort
//
//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN=100005;
//int a[MAXN];
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
////	int cnt=n;              //写法一 
////	while(cnt--){
////		for(int i=1;i<n;i++){                 //记得这里是<不是<= 
////			if(a[i]>a[i+1])swap(a[i],a[i+1]);
////		}
////	}
//
//	for(int i=1;i<=n;i++){        //写法二 
//		for(int j=1;j<n;j++){
//			if(a[j]>a[j+1])swap(a[j],a[j+1]);
//		}
//	}
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
// } 



//#include<bits/stdc++.h>
//using namespace std;
//const int N=1005;
//int a[N];
//int main()
//{
//	int n,maxn;
//	cin>>n;
//	for(int i=1;i<=n;i++)cin>>a[i];
//	for(int i=1;i<=n;i++){
//		for(int j=i;j<=n;j++){                         //优化 
//			if(a[i]>a[j])swap(a[i],a[j]);
//		}
//		for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//		cout<<endl;
//	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//	return 0;
//} 









////选择排序
//void swap(int *a,int *b){
//	int tmp=*a;
//	*a=*b;
//	*b=tmp;
//} 
//void SelectSort(int* arr,int n){
//	int begin = 0,end=n-1;//保存参与单趟排序的第一个数和最后一个数
//	while(begin<end){
//		int maxi=begin;//保存最大值的下标            //记得放在循环内，及时更新坐标 
//		int mini=begin;//保存最小值的下标
//		for(int i=begin;i<=end;i++){
//			if(arr[i]<arr[mini]){
//				mini=i;
//			}
//			if(arr[i]>arr[maxi]){
//				maxi=i;
//			}
//		} 
//		swap(&arr[mini],&arr[begin]);//最小值放在序列开头
//		if(begin==maxi)maxi=mini;//防止最大的数在begin位置被换走 
//		//加入最大值的下标maxi恰好等于begin，最大值恰好原本就在未排序部分的开头位置
//		//当把最小值交换到begin位置后，原来的最大值就不在maxi所记录的位置了 
//		swap(&arr[maxi],&arr[end]);//最大值放在序列结尾 
//		++begin;
//		--end; 
//	} 
//}
//#include<bits/stdc++.h>
//using namespace std;
//const int N=1005;
//int arr[N];
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)cin>>arr[i];
//	SelectSort(arr,n);
//	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
//	return 0;
// } 


//
//#include<stdio.h>
// 
//// 选择排序（优化）
//void SelectSort(int* a, int n)
//{
//	int begin = 0, end = n - 1;            // begin标记第0位置，end标记最后一个数的位置
//	while (begin < end)                    // 决定所遍历的次数
//	{
//		int maxi = begin;                  // 较大数---maxi变量标记
//		int mini = begin;                  // 较小数---mini变量标记
//		
//		for (int i = begin; i <= end; i++)    // 在 [begin,end] 这一区间进行遍历
//		{
//			if (a[i] > a[maxi])            // 遍历的数较大，maxi进行标记
//			{
//				maxi = i;
//			}
//			if (a[i] < a[mini])            // 遍历的数较小，mini进行标记
//			{
//				mini = i;
//			}
//		}
//		Swap(&a[begin], &a[mini]);        // 较小的数与 ”第一个数“ 交换，把较小的数放到 ”第一个位置“
//		if (begin == maxi)                // 若 ”第一个位置“ 是较大数的位置，防止这个位置被上一个交换所 ”赶跑“
//		{
//			maxi = mini;
//		}
//		Swap(&a[end], &a[maxi]);        // 较大的数与 ”最后一个数“ 交换，把较大的数放到 ”最后一个位置“ 上
//		++begin;                        // 决定下一次遍历的区间
//		--end;
//	}
// 
//}
// 
// 
//int main()
//{
//	int a[] = { 38,45,22,29,13,24,42 };
//	int sz = sizeof(a) / sizeof(a[0]);         // 获取数组大小
// 
//	for (int i = 0; i < n; i++)                // 打印排序前的数组
//    {
//	    printf("%d ", a[i]);
//    }
//    printf("\n");
//	
//	SelectSort(a, sz);                        // 实现选择排序
//	
//    for (int i = 0; i < n; i++)                // 打印排序后的数组
//    {
//    	printf("%d ", a[i]);
//    }
//    printf("\n");
//}





////插入排序
//
//#include<bits/stdc++.h>
//using namespace std;
//const int N=1005;
//int a[N];
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)cin>>a[i];
//	for(int i=2;i<=n;i++){//假设第一个已经排好了 
//		//5 4 3 2 1
//		//4 5 3 2 1
//		//1 2 3 4 5
//		int k=a[i];
//		int t=1;//每次都从最左边开始比较，在这里初始化为1 
//		while(k>a[t]){//从最左边开始比较，如果k（当前值）比前面的大，它的位置向右移 
//			t++; //一定只会在前1~i-1元素中比较，就算数列本身是递增的，1 2 3 4 5，2>2时不成立会直接退出的 
//		}
//		for(int j=i-1;j>=t;j--){//注意是i-1，因为下面是a[j+1] 
//	    	a[j+1]=a[j];//验证：最后是 a[t+1]=a[t]，把k这个位置刚好空出来 
//		}
//		a[t]=k;//然后把 这个数放进去 
//	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<" "; 
//	return 0;
//}



//////计数排序
////
//#include<bits/stdc++.h>
//using namespace std;
//const int N=1005;
//int a[N],b[N];
//int main()
//{
//	int n;
//	int maxn=0;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(int i=1;i<=n;i++){
//		b[a[i]]++;
//		maxn=max(maxn,a[i]);
//	}
//	for(int i=1;i<=maxn;i++){
//		if(b[i]){
//			int k=b[i];
//			while(k--)cout<<i<<" ";
//		}
//	}
//	return 0;
// } 


//快速排序 

//#include<bits/stdc++.h>                //用stl函数 
//using namespace std;
//int a[100050];
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)cin>>a[i];
//	sort(a+1,a+n+1);
//	for(int i=1;i<=n;i++)cout<<a[i]<<" "; 
//	return 0;
// } 


//#include<bits/stdc++.h>
//using namespace std;
//void quicksort(int a[],int l,int r){
//	int i=l,j=r;                //l   ij    r
//	//int flag=(l+r)/2;         //l   ji    r 
//	int flag=a[(l+r)/2];
//	if(l>=r)return ;
//	//.l>=r 的退出条件是因为，当 l=r=k(一个常数)的时候，会有j=k-1,
//	//如果不退出的话会有quisort(a,l,l-1) 然后进入死循环
//	while(i<=j){ //取等不影响 
//	//i<j 和i<=j都不影响 思考在什么时候有区别？？？
//	//当最后一步是i==k-1,j==k+1的时候，进行swap，然后变成i==j==k然后退出
//	//如果是i<=j,那么再多运行一次，变成i=k+1,j=k-1 
//	// 相当于下次遍历的时候，分组是否包含地址为k的数，但这并不影响
//		while(a[i]<flag)i++;//不能取等 
//		//如果取等的话，遇到4     4 4 4 3这样的数据，会进入死循环。
//		//因为这个时候i和j已经越界了
//		while(a[j]>flag)j--;
//		if(i<=j){
//			swap(a[i],a[j]);
//			i++,j--;//在i==j时可以退出循环 
//		}
//	}
//	quicksort(a,l,j);
//	quicksort(a,i,r);
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)cin>>a[i];
//	quicksort(a,1,n);
//	for(int i=1;i<+n;i++)cout<<a[i]<<" ";
//	
//	return 0;
// } 




//#include<bits/stdc++.h>
//using namespace std;
//int a[100005];
//void quicksort(int a[],int l,int r){
//	int i=l,j=r;//l  i  j  r
//	int flag=a[(l+r)/2];
//	if(l>=r)return ;
//	while(i<=j){
////		if(a[i]<flag)i++;//if一次就出来了，后面怎么swap 
//		while(a[i]<flag)i++;
//		while(a[j]>flag)j--;
//		if(i<=j){
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//	}
//	quicksort(a,l,j);
//	quicksort(a,i,r); 
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)cin>>a[i];
////	int l=1,r=n;
////	quicksort(a[],l,r);
//	quicksort(a,1,n);
//	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//	return 0;
// } 




//归并排序 

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+5;
//int a[N],b[N];
//void mergesort(int l,int r){
//	if(l==r)return ;
//	int mid=(l+r)/2;
//	mergesort(l,mid);   //注意这个在前面  验证：最后一次的时候，两组应该是已经排序好的 
//	mergesort(mid+1,r);
//	
//	int i=l,j=mid+1,k=l; 
//	while(i<=mid&&j<=r){//这里注意一下 
//		if(a[i]<=a[j])b[k++]=a[i++]; //注意是后置++ 
//		else b[k++]=a[j++];
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
//	cin>>n;
//	for(int i=1;i<=n;i++)cin>>a[i];
//	mergesort(1,n);
//	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//	return 0;
// } 



#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N],b[N];
void mergesort(int l,int r){
	if(l==r)return ;
	int mid=(l+r)/2;
	mergesort(l,mid);
	mergesort(mid+1,r);
	
	int i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r){
		if(a[i]<a[j])b[k++]=a[i++];
		else b[k++]=a[j++];
	}
	while(i<=mid)b[k++]=a[i++];
	while(j<=r)b[k++]=a[j++];
	for(int i=l;i<=r;i++){
		a[i]=b[i];
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	mergesort(1,n);
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}




















 
