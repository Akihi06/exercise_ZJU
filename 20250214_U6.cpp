//U6

//#include<stdio.h>
//int main()
//{
//	char s[1005];
//	int n=0;
//	while((s[n++]=getchar())!='\n');
//	s[n]='\0';
//	for(int i=0;i<n-1;i++)
//	{
//		if(s[i]>='a'&&s[i]<='z')
//		{
//			//s[i]=((s[i]-'a')%26+1) +'A';           ��λ����ת����Сд��ok�� 
//			s[i]=(s[i]-'a'+1)%26+'A';   // a--c��z--b ....��Ϊ�����if�ִ����� 
//		// 	s[i]=(s[i]-'a'+1)%26+'a';    a--b��z--a λ��һ��λ��
//		 //	s[i]=(s[i]-'a')%26+'A';
//		 	continue; 
//		}
//		if(s[i]>='A'&&s[i]<='Z')
//		{
//			s[i]=(s[i]-'A'+1)%26+'a';
//		}
//	}
//	for(int j=0;j<n-1;j++) 
//	{
//		putchar(s[j]);
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main(){
//    char c,delta;
//    delta='A'-'a';
//    do{
//        scanf("%c",&c);
//        if(c>='a'&&c<'z')c+=(delta+1);
//        else if(c>='A'&&c<'Z')c-=(delta-1);
//        else if(c=='Z')c='a';
//        else if(c=='z')c='A';
//        printf("%c",c);
//    }while(c!='\n');
//    return 0;
//}



//void StringCount( char s[] )
//{
//    int i,letter=0,blank=0,digit=0,other=0;
//    for(i=0;s[i]!='\0';i++)
//	{
//        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')letter++;
//        else if(s[i]==' '||s[i]=='\n')blank++;
//        else if(s[i]>='0'&&s[i]<='9')digit++;
//        else other++;
//    }
//    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
//}



//int fn( int a, int n )
//{
//	int i,fn=a;
//	for(i=1;i<n;i++)
//        fn=fn*10+a;
//	return fn;
//}
//int SumA( int a, int n )
//{
//	int i,sum=0;
//	for(i=1;i<=n;i++)
//        sum+=fn(a,i);
//    return sum;
//}



//int factorsum( int number )
//{
//    int i,factorsum=0;
//    for(i=1;i<number;i++)
//        if(number%i==0)
//            factorsum+=i;
//    return factorsum;                 //���Ӻ� 
//}
//void PrintPN(int m,int n)
//{
//    int i,j,flag=0;
//    for(i=m;i<=n;i++)
//	{
//        if(i==factorsum(i))
//		{
//            printf("%d = 1",i);
//            for(j=2;j<i;j++)
//                if(i%j==0)printf(" + %d",j);
//            printf("\n");
//            flag=1;
//        }
//    }
//    if(flag==0)printf("No perfect number");
//}




//int fib( int n )
//{
//    int A1=1,A2=1,An,i;
//    if(n<3)An=1;
//    else{
//        for(i=3;i<=n;i++)
//		{
//            An=A1+A2;
//            A1=A2;
//            A2=An;
//        }
//    }
//    return An;
//}
//void PrintFN( int m, int n )
//{
//    int i=0,f=0,count=0;
//    while(f<=n)
//	{
//        i++;
//        f=fib(i);
//        if(f>=m&&f<=n)
//		{
//            if(count==0)
//			{
//                printf("%d",f);
//                count++;
//            }
//			else
//			{
//                printf(" %d",f);
//                count++;  
//            }
//        }
//    }
//    if(count==0)printf("No Fibonacci number");
//}




//#include <stdio.h>
//#include <math.h>
//
//int prime( int p );
//void Goldbach( int n );
//    
//int main()
//{
//    int m, n, i, cnt;
//
//    scanf("%d %d", &m, &n);
//    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
//    if ( m < 6 ) m = 6;
//    if ( m%2 ) m++;
//    cnt = 0;
//    for( i=m; i<=n; i+=2 ) {
//        Goldbach(i);
//        cnt++;
//        if ( cnt%5 ) printf(", ");
//        else printf("\n");
//    }
//
//    return 0;
//}
//int prime( int p )
//{
//    int prime=1,i;          //�ȸ�prime��ֵ ����ʼ�� �����һ��ʼ����������������ֱ�ӷ���prime�᷵��һ����ȷ����ֵ 
//    if(p==1)prime=0;
//    else if(p==2)prime=1;
//    else
//	{
//        for(i=2;i<=sqrt(p);i++)
//        {
//        	if(p%i==0)
//			{
//                prime=0;
//                break;
//            }
//		}
//    }
//    return prime;
//}
//void Goldbach( int n )
//{
//    int p,q;
//    for(p=2;p<n;p++)
//	{
//        if(prime(p))
//		{
//            q=n-p; 
//            if(prime(q))
//			{
//                printf("%d=%d+%d",n,p,q);
//                break;
//            }
//        }
//    }
//}



//int reverse( int number )
//{
//    int i, j, flag = 0, reverse = 0;
//    if(number<0)
//	{
//        flag = 1;
//        number = -number;
//    }
//    while(number>0)
//	{
//        i = number%10;
//        reverse = reverse*10+i;
//        number = number/10;
//    }
//    if(flag)reverse=-reverse;
//    return reverse;
//}





//#include<stdio.h>
//int main()
//{
//    int a,sum;
//    char c;
//    scanf("%d",&sum);
//    while((c=getchar())!='=')
//	{
//        scanf("%d",&a);
//        switch(c)
//		{
//            case '+':sum+=a;break;
//            case '-':sum-=a;break;
//            case '*':sum*=a;break;
//            case '/':
//                if(a==0)
//				{
//                    printf("ERROR");
//                    return 0;
//                }
//                else sum/=a;
//                break;
//            default:printf("ERROR");
//                    return 0;
//        }
//    }
//    printf("%d",sum);
//    return 0;
//}




#include<stdio.h>
int main()
{
	char ch,prev=' ';                     //ѧ�������ǰ���Զ���Ϊ�ո� 
	while((ch=getchar())!='\n')
	{
		if (ch>='a'&&ch<='z'&&prev==' ') ch=ch-'a'+'A';
		putchar(ch);
		prev=ch;                            //��������Զ���ɡ�ǰһ���� 
	}
	return 0;
}











































