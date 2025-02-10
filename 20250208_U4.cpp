//U4
//#include<stdio.h>
//int main (){
//    double sum=0,eps,item;
//    int n=1,flag=1;
//    scanf("%lf",&eps);
//    do{
//        item=1.0/(3*n-2);
//        sum+=flag*item;
//        flag=-flag;
//        n++;
//    }while(item>eps);
//    printf("sum = %f",sum);
//    return 0;
//}


//#include <stdio.h>
//int main(){
//	int random,i=1,n,input;
//	scanf("%d %d",&random,&n);
//    scanf("%d",&input);
//    while(i<=n&&input>=0){
//		if(i==1&&input==random){
//			printf("Bingo!\n");
//			break;
//		}
//		if((i==2||i==3)&&input==random){
//			printf("Lucky You!\n");
//			break;
//		}
//		if(i>3&&input==random){
//			printf("Good Guess!\n");
//			break;
//		}
//		if(input>random)
//			printf("Too big\n");
//		if(input<random)
//			printf("Too small\n");
//        scanf("%d",&input);
//		i++;
//	}
//	if (i==n+1||input<0)
//		printf("Game Over");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	double e=1,fact=1;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++)
//	{
//		fact*=i;
//		e+=1.0/fact;
//	}
//	printf("%.8lf",e);
//	return 0;
// } 


//#include<stdio.h>
//int main()
//{
//    int min,n,temp;
//    scanf("%d",&n);
//    scanf("%d",&min);
//    for(int i=1;i<n;i++)
//	{
//        scanf("%d",&temp);         //可以学习 
//        
//        if(temp<min)min=temp;
//    }
//    printf("min = %d",min);
//    return 0;
//}





//#include<stdio.h>
//int main(){
//    int M,N,count=0,sum=0,i,j;
//    scanf("%d %d",&M,&N);
//    for(i=M;i<=N;i++){
//        for(j=2;j<i;j++)
//            if(i%j==0)break;
//        if(i==j){
//            count++;
//            sum+=i;
//        }
//    }
//    printf("%d %d",count,sum);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int num,sum;
//	do{
//		scanf("%d",&num);
//		if(num%2==1)
//		{
//			sum+=num;
//		 } 
//		 
//	}while(num>0);
//	return 0;
// } 


//#include <stdio.h>
//int main(){
//	int n,i;
//	double a=2,b=1,temp,sum=0;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++){
//		sum+=a/b;
//        temp=a;
//        a+=b;
//        b=temp;
//	}
//	printf("%.2f",sum);
//	return 0;
//}


//#include<stdio.h>
//int main(){
//    int a,n,i,item=0,sum=0;
//    scanf("%d %d",&a,&n);
//    for(i=1;i<=n;i++){
//        item=item*10+a;
//        sum+=item;
//    }
//    printf("s = %d",sum);
//    return 0;
//}


//# include <stdio.h>
//int main(){
//    int count=0,i,j,k;
//    double x;
//    if(scanf("%lf",&x)==1);
//    for(i=x/5;i>=1;i--)
//	{
//        for(j=(x-5*i)/2;j>=1;j--)            //最少一个，最多则刚好 
//		{
//            for(k=x-5*i-2*j;k>=1;k--)
//			{
//                if(5*i+2*j+k==x)
//				{
//                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
//                    count++;
//                }
//            }
//        }
//    }
//    printf("count = %d",count);
//    return 0;
//}


//#include <stdio.h>
//int ipow( int x, int n);
//int main() 
//{
//	int N, i,j,temp,remainder,Npower, sum;
//	scanf("%d", &N);
//	for (i = ipow(10, N - 1); i < ipow(10, N ); i++) 
//	{
//		sum = 0;
//		temp = i;
//		while (temp != 0) 
//		{
//            Npower=1;
//            remainder=temp % 10;
//            Npower=ipow(remainder,N);
//			sum += Npower;
//			temp /= 10;
//		}
//		if (i == sum)printf("%d\n", i);
//	}
//	return 0;
//}
//int ipow( int x, int n)
//{
//    int i, p=1;
//    for (i=0; i<n; i++) p *=x;
//    return p;
//}

////最大公约数=两数之积/最小公倍数，所以只要求出一个另
////外一个自然通过简单的计算求出来了。
////辗转相除法									
////有两整数a和b：
//// a%b得余数c
//// 若c=0，则b即为两数的最大公约数
//// 若c≠0，则a=b，b=c，再回去执行
////例如求35和15的最大公约数过程为：
////35÷15 余5，,15÷5余0，5即为最大公约数
// 
//#include <stdio.h>                                          //最大公约数，最小公倍数 
//#include <math.h>
// 
//int main()
//{       //浮点错误是所求值不存在 除以0之类了
//	int m,n;
//	scanf("%d %d",&m,&n);
//	int yushu;
//	yushu=m%n;
//	int  x;
//	x=m*n;//记录m*n为后面求公倍数 
//	
//	if(yushu==0)
//	{
//		printf("%d %d",n,x/n);
//	}
//	else
//	{
//		
//		while(yushu!=0)
//		{
//			m=n;
//			n=yushu;
//			yushu=m%n;		 
//		}
//		printf("%d %d",n,x/n);
//	}					         
//    return 0;  
// } 


//#include<stdio.h>
//int main(){
//    int i,n;
//    double H,h,s;
//    scanf("%lf %d",&H,&n);
//    if(n==0)printf("0.0 0.0");
//    else {
//        s=H;
//        h=H/2;
//        for(i=2;i<=n;i++){
//            s+=2*h;
//            h/=2;
//        }
//        printf("%.1lf %.1lf",s,h);
//    }
//    return 0;
//}



//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n/2+1;i++)
//	{
//		for(int j=(n/2+1-i)*2;j>=1;j--)printf(" ");
//		for(int j=1;j<=2*i-1;j++)printf("* ");
//		printf("\n");
//	}
//	for(int i=1;i<=n/2;i++)
//	{
//		for(int j=1;j<=2*i;j++)printf(" ");
//		for(int j=n-2*i;j>=1;j--)printf("* ");
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n,i,sum=0,num=1;
//	scanf("%d",&n);
//	for(i=n-1;i>=1;i--)
//	{
//	  sum=(num+1)*2;
//	  num=sum;
//	}
//	printf("%d",sum);
//	return 0;
//}



//斐波那契数列
#include<stdio.h>
int main()
{
    int month,N,F1=1,F2=1,F3=0;
    //F1,F2,F3表示连续三个月的兔子数量
    scanf("%d",&N);
    if(N==1)month=1;
    else
	{
        month=2;
        while(F3<N)
		{
            F3=F1+F2;
            F1=F2;
            F2=F3;
            month++;
        }
    }
    printf("%d",month);
    return 0;
}
//1 1 2 3 5 8 13 21 34 55......
//  1 2 3   4 5 6
//  1   1+1 




















