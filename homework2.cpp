
//homework2_A
/* 
#include<stdio.h>
#include<string.h>

int main()
{
	char s[105];
	scanf("%s",s);
	int len=strlen(s);
	for(int i = 0;i<len;i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i]-='a'-'A';
		}
		printf("%c",s[i]);      //�����ַ���%c���ַ�������%s 
	}
	
	//printf("%s",s);
	
	return 0;
 } 
 
 */
 
 
 
 //homework2_B
 /*
#include<stdio.h> 
int main()
{
 	char str[55];
 	int n;
 	scanf("%d %s",&n,str);
 	for(int i=0;str[i]!='\0';i++){
 		putchar((str[i]-'a'+n)%26+'a'); //����'a'�ǵ�0λ�� 'z'-'a'=26�պ�Ϊһ��ѭ�� 
	 }
 	
 	
	return 0;
}
 */
 
 
//homework2_C
/*
#include<stdio.h>

int main()
{
	int count = 0;
	char s;
	while((s = getchar())!='\n')
	{
		if(s!=' ')
		count++;
	}
	printf("%d",count);
	return 0;
 } 
  
 
 */
 
 
//homework2_D
 /*
#include<stdio.h>
#include<string.h>
int main()
{
	int q,a,b;
	char document[105];
	//char str;
	//string document,str;
	scanf("%d",&q);
	scanf("%s",document);
	int n=0;
	int op;
	//while((document[n++]=getchar())!='\n');
	
	while(q--)
	{
		scanf("%d",&op);
		if(op==1)
		{
			char str[100];
			scanf("%s",str);
			strcat(document,str);//�������ӵ�ǰ�ߵĺ�ߣ�����1��ֵ 
			printf("%s\n",document);
		}
		if(op==2)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			char temp[100];
			strncpy(temp,document+a,b); 
			temp[b]='\0';     //strncpy���и��ƺ󣬲������\0��
			//�˴�����\0��֤strcpy�������������ĺ���������ȷ����temp�����е����� 
			strcpy(document,temp); //2���Ƶ�1�����1
			printf("%s\n",document); 
		}
		if(op==3)
		{
			int a;
			char str[100];
			scanf("%d %s",a,str);
			char temp[105];
			strcpy(temp,document+a);  //2�д�a��ʼ�Ĳ����ȸ��Ƶ�temp��
			document[a]='\0';
			strcat(document,str);    //2���ӵ�1���棬���1  str���ӵ�aλ�� 
			strcat(document,temp);
			printf("%s\n",document);
		}
		if(op==4)
		{
			char str[100];
			scanf("%s",str);
			char *pos = strstr(document, str);//��2�Ƿ���1���Ӵ� �����򷵻��״γ��ֵ�ַ�����򷵻�NULL 
            if (pos!= NULL) 
			{
                printf("%ld\n", pos - document);//document���ַ�����ʼ��ַ��pos���״γ��ֵ�ַ�������str��document�е�ƫ���������״γ���λ�� 
            } 
			else 
			{
                printf("-1\n");
            } 
		}
	}
	
	
	return 0;
 } 
 
 */
 
 
 /*
#include<bits/stdc++.h>
using namespace std;
string s1,s;
int main()
{	int q,op,a,b;	
	cin>>q>>s;
	while(q--)
   {		
	 cin>>op;		
	 if(op==1)
	{			
	 	cin>>s1;			
		s+=s1;			
		cout<<s<<endl;		
	}		
		if(op==2)
		{			
		cin>>a>>b;			
		s=s.substr(a,b);			
		cout<<s<<endl;		
		}		
		if(op==3)
		{			
		cin>>a>>s1;			
		s=s.insert(a,s1);			
		cout<<s<<endl;		
		}		
		if(op==4)
		{			
		cin>>s1;			
		cout<<(int)s.find(s1)<<endl;		
		}	
   }	
	
	return 0;
}
	
 */
 
 
 
 
 
 
 //homework2_E
//#include<bits/stdc++.h>
/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>'A'&&a[i]<'Z') a[i]+='a'-'A';
	}
	for(int i=0;i<b.length();i++)
	{
		if(b[i]>'A'&&b[i]<'Z') b[i]+='a'-'A';
	}
	
	int q=-1,cnt=0;
	for(int i=0;i<b.length();i++)
	{
		if(a[0]==b[i]&&(i==0||b[i-1]==' '))
		{
			for(int j=0;j<a.length();j++)
			{
				if(b[i+j]!=a[j]) break;
				if(j==a.length()-1)
				{
					if(b[i+j+1]==' '||(i+j+1==b.length()))
					{
						if(q==-1) q=i;
						cnt++;
					}
				}
			}
		}
	}
	if(cnt==0) cout<<q<<endl;
	else
	cout<<cnt<<" "<<q<<endl;
	
	return 0;

}
 
 
 */
 
 
//homework2_F
/*
#include<iostream>
#include<string.h>
using namespace std;
int ans;
string a;
int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main()
{
	getline(cin,a);
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			ans+=num[a[i]-'a'];
		}
		if(a[i]==' ')
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
 
 */
 
 
//homework2_G
#include<iostream>
#include<string.h>
using namespace std;
char a[1005];
int main()
{
	scanf("%s",a);
	int ansb=0,ansg=0;
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if((a[i]=='b')||(a[i]=='o'&&a[i-1]!='b')||(a[i]=='y'&&a[i-1]!='o'))
		{
			ansb++;
		}
		if(a[i]=='g'||(a[i]=='i'&&a[i-1]!='g')||(a[i]=='r'&&a[i-1]!='i')||(a[i]=='l'&&a[i-1]!='r'))
		{
			ansg++;
		}
	}
	printf("%d\n%d",ansb,ansg);
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
