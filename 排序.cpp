////ð������ BubbleSort
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
////	int cnt=n;              //д��һ 
////	while(cnt--){
////		for(int i=1;i<n;i++){                 //�ǵ�������<����<= 
////			if(a[i]>a[i+1])swap(a[i],a[i+1]);
////		}
////	}
//
//	for(int i=1;i<=n;i++){        //д���� 
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
//		for(int j=i;j<=n;j++){                         //�Ż� 
//			if(a[i]>a[j])swap(a[i],a[j]);
//		}
//		for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//		cout<<endl;
//	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//	return 0;
//} 









////ѡ������
//void swap(int *a,int *b){
//	int tmp=*a;
//	*a=*b;
//	*b=tmp;
//} 
//void SelectSort(int* arr,int n){
//	int begin = 0,end=n-1;//������뵥������ĵ�һ���������һ����
//	while(begin<end){
//		int maxi=begin;//�������ֵ���±�            //�ǵ÷���ѭ���ڣ���ʱ�������� 
//		int mini=begin;//������Сֵ���±�
//		for(int i=begin;i<=end;i++){
//			if(arr[i]<arr[mini]){
//				mini=i;
//			}
//			if(arr[i]>arr[maxi]){
//				maxi=i;
//			}
//		} 
//		swap(&arr[mini],&arr[begin]);//��Сֵ�������п�ͷ
//		if(begin==maxi)maxi=mini;//��ֹ��������beginλ�ñ����� 
//		//�������ֵ���±�maxiǡ�õ���begin�����ֵǡ��ԭ������δ���򲿷ֵĿ�ͷλ��
//		//������Сֵ������beginλ�ú�ԭ�������ֵ�Ͳ���maxi����¼��λ���� 
//		swap(&arr[maxi],&arr[end]);//���ֵ�������н�β 
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
//// ѡ�������Ż���
//void SelectSort(int* a, int n)
//{
//	int begin = 0, end = n - 1;            // begin��ǵ�0λ�ã�end������һ������λ��
//	while (begin < end)                    // �����������Ĵ���
//	{
//		int maxi = begin;                  // �ϴ���---maxi�������
//		int mini = begin;                  // ��С��---mini�������
//		
//		for (int i = begin; i <= end; i++)    // �� [begin,end] ��һ������б���
//		{
//			if (a[i] > a[maxi])            // ���������ϴ�maxi���б��
//			{
//				maxi = i;
//			}
//			if (a[i] < a[mini])            // ����������С��mini���б��
//			{
//				mini = i;
//			}
//		}
//		Swap(&a[begin], &a[mini]);        // ��С������ ����һ������ �������ѽ�С�����ŵ� ����һ��λ�á�
//		if (begin == maxi)                // �� ����һ��λ�á� �ǽϴ�����λ�ã���ֹ���λ�ñ���һ�������� �����ܡ�
//		{
//			maxi = mini;
//		}
//		Swap(&a[end], &a[maxi]);        // �ϴ������ �����һ������ �������ѽϴ�����ŵ� �����һ��λ�á� ��
//		++begin;                        // ������һ�α���������
//		--end;
//	}
// 
//}
// 
// 
//int main()
//{
//	int a[] = { 38,45,22,29,13,24,42 };
//	int sz = sizeof(a) / sizeof(a[0]);         // ��ȡ�����С
// 
//	for (int i = 0; i < n; i++)                // ��ӡ����ǰ������
//    {
//	    printf("%d ", a[i]);
//    }
//    printf("\n");
//	
//	SelectSort(a, sz);                        // ʵ��ѡ������
//	
//    for (int i = 0; i < n; i++)                // ��ӡ����������
//    {
//    	printf("%d ", a[i]);
//    }
//    printf("\n");
//}





////��������
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
//	for(int i=2;i<=n;i++){//�����һ���Ѿ��ź��� 
//		//5 4 3 2 1
//		//4 5 3 2 1
//		//1 2 3 4 5
//		int k=a[i];
//		int t=1;//ÿ�ζ�������߿�ʼ�Ƚϣ��������ʼ��Ϊ1 
//		while(k>a[t]){//������߿�ʼ�Ƚϣ����k����ǰֵ����ǰ��Ĵ�����λ�������� 
//			t++; //һ��ֻ����ǰ1~i-1Ԫ���бȽϣ��������б����ǵ����ģ�1 2 3 4 5��2>2ʱ��������ֱ���˳��� 
//		}
//		for(int j=i-1;j>=t;j--){//ע����i-1����Ϊ������a[j+1] 
//	    	a[j+1]=a[j];//��֤������� a[t+1]=a[t]����k���λ�øպÿճ��� 
//		}
//		a[t]=k;//Ȼ��� ������Ž�ȥ 
//	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<" "; 
//	return 0;
//}



//////��������
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


//�������� 

//#include<bits/stdc++.h>                //��stl���� 
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
//	//.l>=r ���˳���������Ϊ���� l=r=k(һ������)��ʱ�򣬻���j=k-1,
//	//������˳��Ļ�����quisort(a,l,l-1) Ȼ�������ѭ��
//	while(i<=j){ //ȡ�Ȳ�Ӱ�� 
//	//i<j ��i<=j����Ӱ�� ˼����ʲôʱ�������𣿣���
//	//�����һ����i==k-1,j==k+1��ʱ�򣬽���swap��Ȼ����i==j==kȻ���˳�
//	//�����i<=j,��ô�ٶ�����һ�Σ����i=k+1,j=k-1 
//	// �൱���´α�����ʱ�򣬷����Ƿ������ַΪk���������Ⲣ��Ӱ��
//		while(a[i]<flag)i++;//����ȡ�� 
//		//���ȡ�ȵĻ�������4     4 4 4 3���������ݣ��������ѭ����
//		//��Ϊ���ʱ��i��j�Ѿ�Խ����
//		while(a[j]>flag)j--;
//		if(i<=j){
//			swap(a[i],a[j]);
//			i++,j--;//��i==jʱ�����˳�ѭ�� 
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
////		if(a[i]<flag)i++;//ifһ�ξͳ����ˣ�������ôswap 
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




//�鲢���� 

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+5;
//int a[N],b[N];
//void mergesort(int l,int r){
//	if(l==r)return ;
//	int mid=(l+r)/2;
//	mergesort(l,mid);   //ע�������ǰ��  ��֤�����һ�ε�ʱ������Ӧ�����Ѿ�����õ� 
//	mergesort(mid+1,r);
//	
//	int i=l,j=mid+1,k=l; 
//	while(i<=mid&&j<=r){//����ע��һ�� 
//		if(a[i]<=a[j])b[k++]=a[i++]; //ע���Ǻ���++ 
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




















 
