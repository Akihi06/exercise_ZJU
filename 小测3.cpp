//A - �����·


//#include<bits/stdc++.h>
//using namespace std;
//int n,a[100005];
//long long ans=0;
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++) {
//		cin>>a[i];
//	}    
//	for(int i=2;i<=n;i++) {
//		if(a[i]>a[i-1]){
//			ans+=a[i]-a[i-1];
//		}
//	}    
//	cout<<ans+a[1];
//	return 0;
//}



//B - ���зֶ� Section II


//#include<bits/stdc++.h>
//using namespace std;
//int n,m;
//long long a[100005];
//int check(int temp){
//	int ans=0,cnt=0;
//	for(int i=1;i<=n;i++){
//		cnt+=a[i];
//		if(cnt>temp){
//			cnt=a[i];
//			ans++;
//		}
//	}
//	ans++;//���һ������ 
//	return ans<=m;
//}
//int main()
//{
//	int l=0,r=0; 
//	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		r+=a[i];//����Ԫ��֮�� 
//		l=max(l,a[i]); //������һ��Ԫ�ص����ֵ 
//	}
//	l--;
//	while(l+1<r){
//		int mid=(l+r)/2;
//		if(check(mid)){
//			r=mid;
//		}
//		else l=mid;
//	}
//	cout<<r;
//	return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int n,m;
//int a[100005];
//int check(int temp){
//	int ans=0,cnt=0;
//	for(int i=1;i<=n;i++){
//		cnt+=a[i];
//		if(cnt>temp){
//			cnt=a[i];
//			ans++;
//		}
//	}
//	ans++;
//	return ans<=m;
//}
//signed main()
//{
//	int l=0,r=0;
//	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		l=max(l,a[i]);
//		r+=a[i];
//	}
//	l--;
//	while(l+1<r){
//		int mid=(l+r)/2;
//		if(check(mid)){//�������ֵ�Ƿ�Ϸ� ���ֵԽ�󣬶���Խ�٣��Ϸ� 
//		//�ҵ��˺Ϸ���mid�������Գ��Ը�С�ģ������ֵ��С�� 
//			r=mid;
//		}
//		else l=mid;
//	}
//	cout<<r<<endl;
//	return 0;
//}




////C - ����
//
////����С������ 
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(int x,int y){
//	return (x%y==0?y:gcd(y,x%y));
//} 
//int main()
//{
//	long long a[5];  //ע��long long 
//	long long x;
//	for(int i=0;i<3;i++){
//		cin>>a[i];
//	}
//	sort(a,a+3);
//	long long b=a[0]*a[1]/gcd(a[0],a[1]);
//	x=b*a[2]/gcd(b,a[2]);
//	cout<<x;
//	
//	return 0;
//}



//D - ��ϵ����


//#include<bits/stdc++.h>
//using namespace std;
//int n,r;
//int a[25];
////int k=0;
//void solve(int qs,int cnt){
//	a[cnt]=qs;
//	if(cnt==r){
//		for(int j=1;j<=r;j++){
//			printf("%3d",a[j]);
//		}
//		printf("\n");
//	//	k=0;
//		return;
//	}
//	if(r-cnt>n-qs)return ;
//	for(int i=qs+1;i<=n;i++){
//		//a[++k]=i;
//		solve(i,cnt+1);
//	}
//}
//int main()
//{
//	cin>>n>>r;
//	solve(0,0);
//	return 0;
// } 





























