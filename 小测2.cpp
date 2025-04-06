//A

//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//	long long int id;
//	string s;
//	long long int len;
//}a[25];
//bool cmp(node x,node y)
//{
//	if(x.len!=y.len){
//		return x.len>y.len;
//	}
//	else{
//		return x.s>y.s;
//	}
//}
//int main()
//{
//	int n;
//	cin>>n; 
//	for(int i=1;i<=n;i++){
//		string ch;
//		cin>>ch;
//		a[i].s=ch;
//		a[i].id=i;
//		a[i].len=ch.length();
//		getchar();
//	}
//	sort(a+1,a+1+n,cmp);
//	cout<<a[1].id<<endl;
//	cout<<a[1].s<<endl;
//	return 0;
//}


//#include<iostream>
//#include<string.h>
//#define int long long
//using namespace std;
//int n,id;
//string s,mx;
//signed main(){
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>s;
//		int Size=s.size();
//        int Size1=mx.size();
//        if(Size>Size1||(Size>=Size1&&s>mx)){mx=s;id=i;}
//	}cout<<id<<endl<<mx<<endl;
//	return 0;
//}



//B

//#include<bits/stdc++.h>
//using namespace std;
//int a,b,c,d;
//int main()
//{
//	int flag1=0,flag2=0;
//	int x;
//	cin>>x;
//	if(x%2==0)flag1=1;
//	if(x>4&&x<=12)flag2=1;
//	
//	if(flag1&&flag2)a=1;
//	if(flag1||flag2)b=1;
//	if((flag1==1&&flag2==0)||(flag2==1&&flag1==0))c=1;
//	if(!flag1&&!flag2)d=1;
//	cout<<a<<" "<<b<<" "<<c<<" "<<d; 
//	return 0;
//}





//C

//#include<bits/stdc++.h>
//using namespace std;
//int akm(int m,int n){
//	if(m==0)return n+1;
//	if(m>0&&n==0)return akm(m-1,1);
//	if(m>0&&n>0)return akm(m-1,akm(m,n-1));
//}
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	akm(m,n);
//	cout<<akm(m,n)<<endl;
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int ans;
//int akm(int m,int n){
//	if(m==0)ans=n+1;
//	if(m>0&&n==0)ans=akm(m-1,1);    //Ö±½Óreturn 
//	if(m>0&&n>0)ans=akm(m-1,akm(m,n-1));
//}
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	akm(m,n);
//	cout<<ans;
//	return 0;
//}


//D


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	int a=m/n;
//	int b=m%n;
//	cout<<a<<" "<<b<<endl;
//	return 0;
//}































