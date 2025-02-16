//U7

//#include<stdio.h>
//int main()
//{
//    int n,i,max,index=0;
//    scanf("%d",&n);
//    int a[n];
//    for(i=0;i<n;i++)scanf("%d",&a[i]);
//    max=a[0];
//    for(i=0;i<n;i++)
//	{
//        if(a[i]>max)
//		{
//            max=a[i];
//            index=i;                //学习这个index的用法 
//        }
//    }
//    printf("%d %d",max,index);
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    int a[n];
//    for(i=n-1;i>=0;i--)scanf("%d",&a[i]);
//    //for(i=0;i<=n-1;i++)printf("%d ",a[i]);
//   //// printf("%d",a[n-1]);
//   	for(i=0;i<n-1;i++)printf("%d ",a[i]);
//    printf("%d",a[n-1]);
//    return 0;
//} 




//#include <stdio.h>
//int main()
//{
//    int n, m, i, j, flag,cnt=0;
//    scanf("%d", &n);
//    int a[n];
//    for (i = 0; i < n; i++)scanf("%d", &a[i]);
//    scanf("%d", &m);
//    int b[m];
//    int s[m+n];
//    for (j = 0; j < m; j++)scanf("%d", &b[j]);
//    for (i = 0; i < n; i++)                    //对a中的，找b里是否有重复 
//	{
//        flag = 0;
//        for (j = 0; j < m; j++) 
//		{
//            if (a[i] == b[j]) 
//			{
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0) 
//		{
//                s[cnt]=a[i];
//                cnt++;
//        }
//    }
//    for (j = 0; j < m; j++) {           //对b中的，找a里是否有重复 
//    	
//        flag = 0;                        //a 1 2 3   b 2 3 4
//		 
//        for (i = 0; i < n; i++) 
//		{
//            if (a[i] == b[j]) 
//			{
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0) 
//		{
//            s[cnt]=b[j];
//            cnt++;
//        }
//    }
//    printf("%d",s[0]);
//    for(i=1;i<cnt;i++)
//	{
//        flag=0;
//        for(j=0;j<i;j++)
//		{
//            if(s[i]==s[j])
//			{
//                flag=1;
//                break;
//            }
//        }
//        if(flag==0)printf(" %d",s[i]);
//    }
//    return 0;
//}





//#include<stdio.h>
//int main()
//{
//    int i,n,j,s=0;
//    scanf("%d",&n);
//    int a[n][n];
//    for(i=0;i<n;i++)
//    {
//    	for(j=0;j<n;j++)
//    	{
//			scanf("%d",&a[i][j]); 
//		}
//	}
//    for(i=0;i<n;i++)
//    {
//    	for(j=0;j<n;j++)
//    	{
//    		if(j!=n-1-i&&i!=n-1&&j!=n-1)         //注意副对角线，如3*3,a[0][2] 
//			{
//				s+=a[i][j];
//			}
//		}
//	}
//    printf("%d",s);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int m,n,i,j;
//    scanf("%d %d",&m,&n);
//    int a[n][n],b[n][n];
//    m=m%n; 
//    for(i=0;i<=n-1;i++)
//    {
//    	for(j=0;j<=n-1;j++)
//		scanf("%d ",&a[i][j]);
//	}
//    for(i=0;i<=n-1;i++)
//	{
//        for(j=0;j<=n-1;j++)
//		{
//            if(j+m>(n-1))b[i][j+m-n]=a[i][j]; 
//            else b[i][j+m]=a[i][j];
//        }
//    }
//    for(i=0;i<=n-1;i++)
//	{
//        for(j=0;j<=n-1;j++)printf("%d ",b[i][j]);
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int i,year,month,day,n=0,
//    a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//    scanf("%d/%d/%d",&year,&month,&day);
//    if((year%4==0&&year%100)||year%400==0)a[2]=29;
//    for(i=1;i<month;i++)n+=a[i];
//    printf("%d",n+day);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char ch,c[80];
//    int i=0,j,flag=0,index;
//    ch=getchar();
//    getchar();
//    while((c[i]=getchar())!='\n')i++;
//    for(j=0;j<i;j++)
//        if(ch==c[j])
//		{
//            index=j;
//            flag=1;
//        }
//    if(flag==1)printf("index = %d",index);
//    else printf("Not Found");
//    return 0;
//}




//#include <stdio.h>
//int main()
//{
//    int n=0,i;
//    char a[80];
//    while((a[n]=getchar())!='\n')n++;
//    for(i=n-1;i>=0;i--)printf("%c",a[i]);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n,cnt_max,i;
//    scanf("%d",&n);
//    int a[n],b[10]={0};
//    for(i=0;i<n;i++)scanf("%d",&a[i]);
//    for(i=0;i<n;i++)
//	{
//        do{
//            b[a[i]%10]++;
//            a[i]/=10;
//        }while(a[i]!=0);
//    }
//    cnt_max=b[0];
//    for(i=1;i<10;i++)if(cnt_max<b[i])cnt_max=b[i];
//    printf("%d:",cnt_max);
//    for(i=0;i<10;i++)if(b[i]==cnt_max)printf(" %d",i);
//    return 0;
//}





//#include <stdio.h>
//int main(){
//    int T,i,j,k,l,flag;
//    scanf("%d",&T);
//    int a[T];
//    int b[T][11][11];
//    for(i=0;i<T;i++)
//	{
//        scanf("%d",&a[i]);
//        j = a[i];
//        for(k=0;k<j;k++)
//            for(l=0;l<j;l++)
//                scanf("%d",&b[i][k][l]);
//    }
//    for(i=0;i<T;i++)
//	{
//        j = a[i];
//        flag = 1;
//        for(k=1;k<j;k++)
//		{
//            for(l=0;l<k;l++)
//			{
//                if(b[i][k][l])
//				{
//                    flag=0;
//                    break;
//                }
//            }
//            if(!flag)break;
//        }
//        if(flag)printf("YES\n");
//         else
//		 {
//            printf("NO\n");
//            flag = 0;
//        }
//    }
//    return 0;
//}
//
//
//
//

//#include <stdio.h>
//int pdf(int m[][10],int n);//声明
//int main() 
//    {
//        int T, n;
//        scanf("%d", &T);//矩阵个数
//        while (T--)
//        {
//            scanf("%d", &n);//矩阵边长
//            int m[10][10] = {0};//初始化矩阵
//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j < n; j++)
//                {
//                    scanf("%d", &m[i][j]);//写入矩阵
//                }
//            }
//            if (pdf(m, n))//判断矩阵，引入判断函数pdf
//            {
//                printf("YES\n");
//            }
//            else
//            {
//                printf("NO\n");
//            }
//        }
//        return 0;
//    }
//int pdf(int m[][10],int n)//判断函数
//    {
//        for (int i = 0; i < n; i++)    //(0)|(1)|(2)
//        {
//            for (int j = 0; j < i; j++)//(x)|(1)|(0)(1)
//                //检查对角线以下数字
//            { 
//                if (m[i][j]!= 0)
//                {
//                    return 0;//如果非0则不是上三角矩阵
//                }
//            }
//        }
//        return 1; //如果为0是上三角矩阵
//    }





//#include<stdio.h>
//int main()
//{
//    int m,n,sum=0;
//    scanf("%d %d",&m,&n);
//    int a[m][n],i,j;
//    for(i=0;i<m;i++)
//        for(j=0;j<n;j++)
//            scanf("%d",&a[i][j]);
//    for(i=0;i<m;i++)
//	{
//        for(j=0;j<n;j++)
//            sum+=a[i][j];
//        printf("%d\n",sum);
//        sum=0;
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n,i,j,k;
//    int max,flag;
//    scanf("%d",&n);
//    int a[n][n];
//    for(i=0;i<n;i++)
//    {
//    	for(j=0;j<n;j++)
//    	{
//    		scanf("%d",&a[i][j]);
//		}
//	}
//    for(i=0;i<n;i++)
//	{
//        max=0;
//        for(j=0;j<n;j++)
//        {
//        	if(a[i][j]>=a[i][max])          //行最大
//				max=j;
//		}
//        flag=1;
//        for(k=0;k<n;k++)
//        {
//        	if(a[i][max]>a[k][max])
//				flag=0;                   //如果行最大 不是列最小，则不输出 
//		}
//        if(flag)
//		{
//            printf("%d %d\n",i,max);
//            break;
//        }
//    }
//    if(flag==0)printf("NONE");
//    return 0;
//}






//#include<stdio.h>
//int check ( char c )
//{
//    if( c<'A' || c>'Z' ) return 0;
//    if(c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
//        return 1;
//    else return 0;
//}
//int main()
//{
//    char a[80];
//    int cnt=0,i=0;
//    while((a[i]=getchar())!='\n')i++;
//    for(i=0;a[i]!='\n';i++)
//        cnt+=check (a[i]);
//    printf("%d",cnt);
//    return 0;
//}
//
//
//#include <stdio.h>
//int check ( char c )
//{
//    int ret;
//    if ( c<'A' || c>'Z' ) return 0;
//    switch (c) 
//	{
//    case 'A': 
//    case 'E': 
//    case 'I': 
//    case 'O': 
//    case 'U': 
//        ret=0; break;
//    default: ret=1; break;
//    }
//    return ret;
//}
//int main()
//{
//    char c;
//    int cnt = 0;
//    while ( (c=getchar())!='\n' ) 
//        cnt += check(c);
//    printf("%d\n", cnt);
//    return 0;
//}




//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//    char str[81];
//    gets(str);
//    for( int i=0; i<strlen(str); i++ )
//        if( isupper(str[i]) )str[i]='A'+'Z'-str[i];
//    for( int i=0; i<strlen(str); i++ )printf("%c",str[i]);
//    return 0;
//}
//
//
// 
//#include <stdio.h>
//#include <string.h>
//int isupper(char c)
//{
//    int isupper=0;
//    if(c>='A'&&c<='Z')isupper=1;
//    return isupper;
//}
//int main()
//{
//    char str[81];
//    gets(str);
//    for( int i=0; i<strlen(str); i++ )
//        if( isupper(str[i]) )str[i]='A'+'Z'-str[i];    //学这里str[i]='A'+'Z'-str[i] 
//    for( int i=0; i<strlen(str); i++ )printf("%c",str[i]);
//    return 0;
//}




#include<stdio.h>
int main()
{
    int i=0,j,flag=0,n=0;
    char ch,a[80];
    a[0]='\0';
    while((ch=getchar())!='#')
	{
        if(ch=='-'&&a[0]=='\0')
		{
            a[i]=ch;  //如果在第一个十六进制字符之前存在字符“-”
            i++;
        }
        if((ch>='a'&&ch<='f')||(ch>='A'&&ch<='F')||(ch>='0'&&ch<='9')){
            a[i]=ch;
            i++;
            flag=1;
        }
    }
    if(a[0]=='-'&&flag)printf("-");
    j=i;
    for(i=0;i<j;i++)
	{
        if(a[i]>='0'&&a[i]<='9')n=n*16+a[i]-'0';
        else if(a[i]>='A'&&a[i]<='Z')n=n*16+a[i]-'A'+10;
        else if(a[i]>='a'&&a[i]<='z')n=n*16+a[i]-'a'+10;
    }
    printf("%d",n);
    return 0;
}

































