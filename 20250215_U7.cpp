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









































































